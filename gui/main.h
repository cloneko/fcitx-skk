/***************************************************************************
 *   Copyright (C) 2013~2013 by CSSlayer                                   *
 *   wengxt@gmail.com                                                      *
 *                                                                         *
 *  This program is free software: you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation, either version 3 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *  You should have received a copy of the GNU General Public License      *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.  *
 *                                                                         *
 ***************************************************************************/

#ifndef FCITX_SKK_GUI_MAIN_H_
#define FCITX_SKK_GUI_MAIN_H_

#include <fcitx-qt/fcitxqtconfiguiplugin.h>

class SkkConfigPlugin : public FcitxQtConfigUIPlugin
{
    Q_OBJECT
public:
    explicit SkkConfigPlugin(QObject* parent = 0);
    virtual QString name();
    virtual QStringList files();
    virtual QString domain();
    virtual FcitxQtConfigUIWidget* create(const QString& key);
};

#endif // FCITX_TOOLS_GUI_MAIN_H_
