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
#include <wx/clrpicker.h>
#include <wx/listbox.h>
#include "wxSPanel.h"
#include "Controller.h"
class MainFrame : public wxFrame
{
private:
	wxString selectedDir;
	int items;
	Controller* controller;
protected:




	wxBoxSizer* panels;
	wxSPanel* Main_panel;
	wxButton* m_option_btn1;
	wxButton* m_option_btn11;
	wxButton* m_option_btn12;
	wxButton* m_option_btn13;
	wxButton* m_option_btn14;
	wxButton* m_option_btn15;
	wxButton* m_start_sort_btn;
	wxSPanel* Settings_panel;
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
	wxChoice* m_comboBox1;
	wxStaticText* m_staticText111;
	wxSpinCtrl* m_spinCtrl11;
	wxChoice* m_comboBox11;
	wxButton* s_ok_btn;
	wxButton* s_apply_btn;
	wxButton* s_cancel_btn;
	wxSPanel* Progress_panel;
	wxStaticBitmap* p_status_bitmap;
	wxStaticText* m_staticText9;
	wxGauge* p_progress;
	wxButton* p_abort_btn;
	wxColourPickerCtrl* m_color_pctr;
	wxSPanel* Select_panel;
	wxListBox* sl_m_listBox1;
	wxStaticText* sl_ftext;
	wxButton* sl_start_btn;
	wxButton* sl_cancel_btn;
	wxButton* sl_sall_btn;
	wxButton* sl_snone_btn;



public:

	MainFrame();
	void Update_frame();
	~MainFrame();

	void OnOptionBTNClick(wxCommandEvent& event);
	void OnStartSortBTNClick(wxCommandEvent& event);
	void OnOkBTNClick(wxCommandEvent& event);
	void OnApplyBTNClick(wxCommandEvent& event);
	void OnCancelBTNClick(wxCommandEvent& event);
	void OnAbortBTNClick(wxCommandEvent& event);
	void OnSAllBTNClick(wxCommandEvent& event);
	void OnSNoneBTNClick(wxCommandEvent& event);
	void OnSstartBTNClick(wxCommandEvent& event);
	void OnScancelBTNClick(wxCommandEvent& event);
	void OnListItemClick(wxCommandEvent& event);

	void ChangePanel(wxPanel* current, wxPanel* next);
	void Update_text_select();
};
