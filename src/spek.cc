/* spek.vala
 *
 * Copyright (C) 2010-2011  Alexander Kojevnikov <alexander@kojevnikov.com>
 *
 * Spek is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Spek is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Spek.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <wx/wx.h>

#include "spek-window.hh"

class Spek: public wxApp
{
    virtual bool OnInit();
};

IMPLEMENT_APP(Spek)

bool Spek::OnInit()
{
    SpekWindow *window = new SpekWindow(wxT("Hello World"), wxPoint(50,50), wxSize(450,340));
    window->Show(true);
    SetTopWindow(window);
    return true;
}
