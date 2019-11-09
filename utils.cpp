/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     rekols <rekols@foxmail.com>
 * Maintainer: rekols <rekols@foxmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "utils.h"

#include <QUrl>
#include <QDir>
#include <QFile>
#include <QDebug>
#include <QFileInfo>
#include <QFontInfo>
#include <QMimeType>
#include <QApplication>
#include <QMimeDatabase>
#include <QStandardPaths>
#include <QImageReader>
#include <QPixmap>
#include <QFile>
#include <QFontDatabase>
#include <QTextCodec>

QHash<QString, QPixmap> Utils::m_imgCacheHash;
QHash<QString, QString> Utils::m_fontNameCache;

Utils::Utils(QObject *parent)
    : QObject(parent)
{
}

Utils::~Utils()
{
}

QString Utils::getQssContent(const QString &filePath)
{
    QFile file(filePath);
    QString qss;

    if (file.open(QIODevice::ReadOnly)) {
        qss = file.readAll();
    }

    return qss;
}

QString Utils::getConfigPath()
{
    QDir dir(QDir(QStandardPaths::standardLocations(QStandardPaths::ConfigLocation).first())
             .filePath(qApp->organizationName()));

    return dir.filePath(qApp->applicationName());
}

bool Utils::isFontMimeType(const QString &filePath)
{
    const QString mimeName = QMimeDatabase().mimeTypeForFile(filePath).name();;

    if (mimeName.startsWith("font/") ||
        mimeName.startsWith("application/x-font")) {
        return true;
    }

    return false;
}

QString Utils::suffixList()
{
    return QString("Font Files (*.ttf *.ttc *.otf)");
}

QPixmap Utils::renderSVG(const QString &filePath, const QSize &size)
{
    if (m_imgCacheHash.contains(filePath)) {
        return m_imgCacheHash.value(filePath);
    }

    QImageReader reader;
    QPixmap pixmap;

    reader.setFileName(filePath);

    if (reader.canRead()) {
        const qreal ratio = qApp->devicePixelRatio();
        reader.setScaledSize(size * ratio);
        pixmap = QPixmap::fromImage(reader.read());
        pixmap.setDevicePixelRatio(ratio);
    } else {
        pixmap.load(filePath);
    }

    m_imgCacheHash.insert(filePath, pixmap);

    return pixmap;
}

QString Utils::loadFontFamilyByType(FontType fontType)
{
    QString fontFileName = "";
    switch(fontType) {
    case SourceHanSansMedium:
        fontFileName = ":/font/SourceHanSansCN-Medium.ttf";
        break;
    case SourceHanSansNormal:
        fontFileName = ":/font/SourceHanSansCN-Normal.ttf";
        break;
    case DefautFont:
        QFont font;
        return font.family();
    }


    if (m_fontNameCache.contains(fontFileName)) {
        return m_fontNameCache.value(fontFileName);
    }

    QString fontFamilyName = "";
    QFile fontFile(fontFileName);
    if(!fontFile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"Open font file error";
        return fontFamilyName;
    }

    int loadedFontID = QFontDatabase::addApplicationFontFromData(fontFile.readAll());
    QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);
    if(!loadedFontFamilies.empty())
    {
        fontFamilyName = loadedFontFamilies.at(0);
    }
    fontFile.close();

    m_fontNameCache.insert(fontFileName, fontFamilyName);
    return fontFamilyName;
}

QFont Utils::loadFontBySizeAndWeight(QString fontFamily,int fontSize, int fontWeight)
{
    QFont font(fontFamily);
    font.setPixelSize(fontSize);
    font.setWeight(fontWeight);

    return font;
}

QString Utils::fromSpecialEncoding(const QString &inputStr)
{
    qDebug() << "inputStr is:" << inputStr << endl;
    bool bFlag = inputStr.contains(QRegExp("[\\x4e00-\\x9fa5]+"));
    if (bFlag) {
        return inputStr;
    }

    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    if (codec)
    {
        QString unicodeStr =  codec->toUnicode(inputStr.toLatin1());
        qDebug() << "convert to unicode:" << unicodeStr << endl;
        return unicodeStr;
    }
    else
    {
        return inputStr;
    }
}

DebApplicationHelper *DebApplicationHelper::instance()
{
    return qobject_cast<DebApplicationHelper*>(DGuiApplicationHelper::instance());
}

#define CAST_INT static_cast<int>

static QColor light_qpalette[QPalette::NColorRoles] {
    QColor("#414d68"),                              //WindowText
    QColor("#e5e5e5"),                              //Button
    QColor("#e6e6e6"),                              //Light
    QColor("#e5e5e5"),                              //Midlight
    QColor("#001A2E"),                              //Dark  -- changed origin is #e3e3e3
    QColor("#e4e4e4"),                              //Mid
    QColor("#414d68"),                              //Text
    Qt::black,                                      //BrightText
    QColor("#414d68"),                              //ButtonText
    Qt::white,                                      //Base
    QColor("#f8f8f8"),                              //Window
    QColor(0, 0, 0, CAST_INT(0.05 * 255)),          //Shadow
    QColor("#0081ff"),                              //Highlight
    Qt::white,                                      //HighlightedText
    QColor("#0082fa"),                              //Link
    QColor("#ad4579"),                              //LinkVisited
    QColor(0, 0, 0, CAST_INT(0.03 * 255)),          //AlternateBase
    Qt::white,                                      //NoRole
    QColor(255, 255, 255, CAST_INT(0.8 * 255)),     //ToolTipBase
    QColor("#526A7F")                               //ToolTipText -- changed origin is Qt::black
};

static QColor dark_qpalette[QPalette::NColorRoles] {
    QColor("#c0c6d4"),                              //WindowText
    QColor("#444444"),                              //Button
    QColor("#484848"),                              //Light
    QColor("#474747"),                              //Midlight
    QColor("#C0C6D4"),                              //Dark      -- changed origin is #414141
    QColor("#434343"),                              //Mid
    QColor("#c0c6d4"),                              //Text
    Qt::white,                                      //BrightText
    QColor("#c0c6d4"),                              //ButtonText
    QColor(255, 255, 255, CAST_INT(0.05 * 255)),    //Base --- changed origin is #282828
    QColor("#252525"),                              //Window
    QColor(0, 0, 0, CAST_INT(0.05 * 255)),          //Shadow
    QColor("#0081ff"),                              //Highlight
    QColor("#b8d3ff"),                              //HighlightedText
    QColor("#0082fa"),                              //Link
    QColor("#ad4579"),                              //LinkVisited
    QColor(0, 0, 0, CAST_INT(0.05 * 255)),          //AlternateBase
    Qt::black,                                      //NoRole
    QColor(45, 45, 45, CAST_INT(0.8 * 255)),        //ToolTipBase
    QColor("#6D7C88")                               //ToolTipText -- changed origin is #c0c6d4
};

static QColor light_dpalette[DPalette::NColorTypes] {
    QColor(),                                   //NoType
    QColor(0, 0, 0, CAST_INT(255 * 0.03)),      //ItemBackground
    QColor("#001A2E"),                          //TextTitle
    QColor("#609DC8"),                          //TextTips --- changed origin is #526A7F
    QColor("#FF6D6D"),                          //TextWarning -- changed origin is #FF5736
    QColor("#7C7C7C"),                          //TextLively  -- changed origin is #0082FA
    QColor("#417505"),                          //LightLively -- changed origin is #25b7ff
    QColor("#47790C"),                          //DarkLively -- changed origin is #0098ff
    QColor(0, 0, 0, CAST_INT(0.03 * 255))       //FrameBorder
};

static QColor dark_dpalette[DPalette::NColorTypes] {
    QColor(),                                       //NoType
    QColor(255, 255, 255, CAST_INT(255 * 0.05)),    //ItemBackground
    QColor("#C0C6D4"),                              //TextTitle
    QColor("#6D7C88"),                              //TextTips
    QColor("#9A2F2F"),                              //TextWarning -- changed origin is #FF5736
    QColor("#7C7C7C"),                              //TextLively -- changed origin is #0082FA
    QColor("#417505"),                              //LightLively -- changed origin is #0056c1
    QColor("#47790C"),                              //DarkLively  -- changed origin is #004c9c
    QColor(0, 0, 0, CAST_INT(0.08 * 255))           //FrameBorder
};

DPalette DebApplicationHelper::standardPalette(DGuiApplicationHelper::ColorType type) const
{
    static const DPalette *light_palette = nullptr, *dark_palette = nullptr;

    DPalette *pa;
    const QColor *qcolor_list, *dcolor_list;

    if (type == DarkType) {
        pa = new DPalette();
        dark_palette = pa;
        qcolor_list = dark_qpalette;
        dcolor_list = dark_dpalette;
    } else {
        pa = new DPalette();
        light_palette = pa;
        qcolor_list = light_qpalette;
        dcolor_list = light_dpalette;
    }

    for (int i = 0; i < DPalette::NColorRoles; ++i) {
        QPalette::ColorRole role = static_cast<QPalette::ColorRole>(i);

        QColor color = qcolor_list[i];
        pa->setColor(DPalette::Active, role, color);
        generatePaletteColor(*pa, role, type);
    }

    for (int i = 0; i < DPalette::NColorTypes; ++i) {
        DPalette::ColorType role = static_cast<DPalette::ColorType>(i);

        QColor color = dcolor_list[i];
        pa->setColor(DPalette::Active, role, color);
        generatePaletteColor(*pa, role, type);
    }

    return *const_cast<const DPalette*>(pa);
}

DPalette DebApplicationHelper::palette(const QWidget *widget, const QPalette &base) const
{
    Q_UNUSED(base)

    DPalette palette;

    do {
        // 存在自定义palette时应该根据其自定义的palette获取对应色调的DPalette
        const QPalette &wp = widget->palette();

        palette = standardPalette(toColorType(wp));

        // 关注控件palette改变的事件
        const_cast<QWidget*>(widget)->installEventFilter(const_cast<DebApplicationHelper*>(this));
    } while (false);

    return palette;
}

void DebApplicationHelper::setPalette(QWidget *widget, const DPalette &palette)
{
    // 记录此控件被设置过palette
    widget->setProperty("_d_set_palette", true);
    widget->setPalette(palette);
}

void DebApplicationHelper::resetPalette(QWidget *widget)
{
    widget->setProperty("_d_set_palette", QVariant());
    widget->setAttribute(Qt::WA_SetPalette, false);
}

DebApplicationHelper::DebApplicationHelper(){}

DebApplicationHelper::~DebApplicationHelper(){}

bool DebApplicationHelper::eventFilter(QObject *watched, QEvent *event)
{
    return DGuiApplicationHelper::eventFilter(watched, event);
}