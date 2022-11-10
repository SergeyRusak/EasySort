#include "SettingsWindow.h"
#include "MainWindow.h"



SettingsWindow::SettingsWindow() : wxPanel(NULL, wxID_ANY, wxDefaultPosition, wxSize(640, 360))
{
	
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);

	m_staticText8 = new wxStaticText(this, wxID_ANY, wxT("Settings"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText8->Wrap(-1);
	vbox->Add(m_staticText8, 0, wxALIGN_CENTER | wxALL, 5);

	wxFlexGridSizer* settings_sizer;
	settings_sizer = new wxFlexGridSizer(5, 2, 5, 20);
	settings_sizer->SetFlexibleDirection(wxBOTH);
	settings_sizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn2 = new wxRadioButton(this, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer11->Add(m_radioBtn2, 0, wxALL, 5);

	m_staticText2 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText2->Wrap(-1);
	bSizer11->Add(m_staticText2, 0, wxALL, 5);


	settings_sizer->Add(bSizer11, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn21 = new wxRadioButton(this, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer111->Add(m_radioBtn21, 0, wxALL, 5);

	m_staticText21 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText21->Wrap(-1);
	bSizer111->Add(m_staticText21, 0, wxALL, 5);


	settings_sizer->Add(bSizer111, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer112;
	bSizer112 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn22 = new wxRadioButton(this, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer112->Add(m_radioBtn22, 0, wxALL, 5);

	m_staticText22 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText22->Wrap(-1);
	bSizer112->Add(m_staticText22, 0, wxALL, 5);


	settings_sizer->Add(bSizer112, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer113;
	bSizer113 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn23 = new wxRadioButton(this, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer113->Add(m_radioBtn23, 0, wxALL, 5);

	m_staticText23 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText23->Wrap(-1);
	bSizer113->Add(m_staticText23, 0, wxALL, 5);


	settings_sizer->Add(bSizer113, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer1131;
	bSizer1131 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText11 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText11->Wrap(-1);
	bSizer1131->Add(m_staticText11, 0, wxALL, 5);

	m_spinCtrl1 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
	bSizer1131->Add(m_spinCtrl1, 0, wxALL, 5);

	m_comboBox1 = new wxComboBox(this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
	bSizer1131->Add(m_comboBox1, 0, wxALL, 5);


	settings_sizer->Add(bSizer1131, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer11311;
	bSizer11311 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText111 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText111->Wrap(-1);
	bSizer11311->Add(m_staticText111, 0, wxALL, 5);

	m_spinCtrl11 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
	bSizer11311->Add(m_spinCtrl11, 0, wxALL, 5);

	m_comboBox11 = new wxComboBox(this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
	bSizer11311->Add(m_comboBox11, 0, wxALL, 5);


	settings_sizer->Add(bSizer11311, 1, wxEXPAND, 5);


	vbox->Add(settings_sizer, 5, wxEXPAND, 5);

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer(wxHORIZONTAL);

	ok_btn = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer10->Add(ok_btn, 0, wxALL | wxBOTTOM | wxRIGHT, 5);

	apply_btn = new wxButton(this, wxID_APPLY, wxT("Apply"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer10->Add(apply_btn, 0, wxALL, 5);

	cancel_btn = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer10->Add(cancel_btn, 0, wxALL | wxBOTTOM | wxRIGHT, 5);


	vbox->Add(bSizer10, 0, wxALIGN_BOTTOM | wxALIGN_RIGHT, 5);


	this->SetSizer(vbox);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	ok_btn ->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SettingsWindow::OkButtonPressed);
	apply_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED,&SettingsWindow::ApplyButtonPressed);
	cancel_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &SettingsWindow::CancelButtonPressed);
}

SettingsWindow::~SettingsWindow()
{
	//Disconnect Events
	ok_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SettingsWindow::OkButtonPressed);
	apply_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SettingsWindow::ApplyButtonPressed);
	cancel_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &SettingsWindow::CancelButtonPressed);

	this->Destroy();
}


void ApplyChanges() {

}

void Exit(bool saveChanges)
{
	if (saveChanges) ApplyChanges();
}







void SettingsWindow::OkButtonPressed() {
	Exit(true);
}
void SettingsWindow::ApplyButtonPressed() {
	ApplyChanges();
}
void SettingsWindow::CancelButtonPressed() {
	Exit(false);
}
