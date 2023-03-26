#pragma once
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/custombgwin.h>
#include <wx/stattext.h>
#include "Controller.h"
class MainPanel : public wxCustomBackgroundWindow<wxPanel>
{
    public:
        wxButton* m_option_btn1;
        wxButton* m_option_btn11;
        wxButton* m_option_btn15;
        wxButton* m_start_sort_btn;        



        MainPanel(wxWindow* parent);
        void OnOptionBTNClick(wxCommandEvent& event);
        void OnStartSortBTNClick(wxCommandEvent& event);
        ~MainPanel();

};

