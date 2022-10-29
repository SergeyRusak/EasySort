#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include "MainWindow.h"
class Main : public wxApp
{
public:
    virtual bool OnInit();
};
enum
{
    ID_Hello = 1
};
wxIMPLEMENT_APP(Main);

bool Main::OnInit()
{
    MainWindow* frame = new MainWindow();
    frame->Show(true);
    return true;
}
