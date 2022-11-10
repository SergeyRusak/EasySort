#pragma once
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/radiobut.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include <wx/event.h>
#include "Main.cpp"
class SettingsWindow :
    public wxPanel
{
public:
protected:
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
	wxButton* ok_btn;
	wxButton* apply_btn;
	wxButton* cancel_btn;



    void OnExit(bool saveChanges);
	void Exit(bool saveChanges);
	void OkButtonPressed();
	void ApplyButtonPressed();
	void CancelButtonPressed();
	void ApplyChanges();

	void OnQuit();

private:
	DECLARE_EVENT_TABLE()
};

