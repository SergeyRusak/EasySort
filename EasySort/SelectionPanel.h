#pragma once
#include <wx/custombgwin.h>
#include <wx/panel.h>
#include <wx/listbox.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include "Controller.h"
class SelectionPanel :wxCustomBackgroundWindow<wxPanel>
{
public:
	wxListBox* sl_m_listBox1;
	wxStaticText* sl_ftext;
	wxButton* sl_start_btn;
	wxButton* sl_cancel_btn;
	wxButton* sl_sall_btn;
	wxButton* sl_snone_btn;

	SelectionPanel(wxWindow* parent);
	~SelectionPanel();

	void OnSAllBTNClick(wxCommandEvent& event);
	void OnSNoneBTNClick(wxCommandEvent& event);
	void OnSstartBTNClick(wxCommandEvent& event);
	void OnScancelBTNClick(wxCommandEvent& event);
};

