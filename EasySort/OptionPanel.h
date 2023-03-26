#pragma once
#include <wx/custombgwin.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/radiobut.h>
#include <wx/colour.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/clrpicker.h>
#include "Settings.h"
#include "Controller.h"
class OptionPanel : public wxCustomBackgroundWindow<wxPanel>
{
public:
	wxStaticText* m_staticText8;
	wxStaticText* m_staticText2;
	wxStaticText* m_staticText11;
	wxStaticText* m_staticText111;
	wxStaticText* m_staticText21;
	wxStaticText* m_staticText22;
	wxStaticText* m_staticText23;
	wxRadioButton* m_radioBtn2;
	wxRadioButton* m_radioBtn21;
	wxRadioButton* m_radioBtn22;
	wxRadioButton* m_radioBtn23;
	wxColourPickerCtrl* m_color_pctr;
	wxSpinCtrl* m_spinCtrl1;
	wxSpinCtrl* m_spinCtrl11;
	wxChoice* m_comboBox1;
	wxChoice* m_comboBox11;
	wxButton* s_ok_btn;
	wxButton* s_apply_btn;
	wxButton* s_cancel_btn;



	OptionPanel(wxWindow* parent);
	~OptionPanel();


	void OnOkBTNClick(wxCommandEvent& event);
	void OnApplyBTNClick(wxCommandEvent& event);
	void OnCancelBTNClick(wxCommandEvent& event);
};

