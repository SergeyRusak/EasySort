#include <wx/wxprec.h>
#include <wx/wx.h>


#include "MainFrame.h"

#define wxUSE_STD_IOSTREAM 1

class Main : public wxApp
{
private:

public:
    virtual bool OnInit();
    virtual int OnExit();
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
int Main::OnExit()
{
    wxLogMessage(wxT("Выход..."));
    return wxApp::OnExit();
}


