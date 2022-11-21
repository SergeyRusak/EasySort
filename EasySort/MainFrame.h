#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/radiobut.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>
#include <wx/statbmp.h>
#include <wx/gauge.h>
#include <wx/progdlg.h>
#include <wx/frame.h>


#include "Controller.h"
class MainFrame : public wxFrame
{
private:

protected:


	wxBoxSizer* panels;
	wxPanel* Main_panel;
	wxButton* m_option_btn1;
	wxButton* m_option_btn11;
	wxButton* m_option_btn12;
	wxButton* m_option_btn13;
	wxButton* m_option_btn14;
	wxButton* m_option_btn15;
	wxButton* m_start_sort_btn;
	wxPanel* Settings_panel;
	wxStaticText* m_staticText8;
	wxRadioButton* m_radioBtn2;
	wxStaticText* m_staticText2;
	wxRadioButton* m_radioBtn21;
	wxStaticText* m_staticText21;
	wxRadioButton* m_radioBtn22;
	wxStaticText* m_staticText22;
	wxRadioButton* m_radioBtn23;
	wxStaticText* m_staticText23;
	wxStaticText* m_staticText11;
	wxSpinCtrl* m_spinCtrl1;
	wxComboBox* m_comboBox1;
	wxStaticText* m_staticText111;
	wxSpinCtrl* m_spinCtrl11;
	wxComboBox* m_comboBox11;
	wxButton* s_ok_btn;
	wxButton* s_apply_btn;
	wxButton* s_cancel_btn;
	wxPanel* Progress_panel;
	wxStaticBitmap* p_status_bitmap;
	wxStaticText* m_staticText9;
	//wxGauge* p_progress;
	wxButton* p_abort_btn;



public:

	MainFrame();

	~MainFrame();

	void OnOptionBTNClick(wxCommandEvent& event);
	void OnStartSortBTNClick(wxCommandEvent& event);
	void OnOkBTNClick(wxCommandEvent& event);
	void OnApplyBTNClick(wxCommandEvent& event);
	void OnCancelBTNClick(wxCommandEvent& event);
	void OnAbortBTNClick(wxCommandEvent& event);

	void ChangePanel(wxPanel* current, wxPanel* next);

};
