#include <wx/wxprec.h>
#include <wx/wx.h>
#include "Mainframe.h"
class Main : public wxApp
{
public:
    virtual bool OnInit();
    wxFrame* frame;
};
enum
{
    ID_Hello = 1
};
wxIMPLEMENT_APP(Main);

bool Main::OnInit()
{
    frame = new MainFrame();
    frame->Show(true);
    return true;
}



