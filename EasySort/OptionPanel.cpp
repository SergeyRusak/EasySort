#include "OptionPanel.h"


OptionPanel::OptionPanel(wxWindow* parent)
{

	wxArrayString times;
	times.Add("День");
	times.Add("Неделя");
	times.Add("Месяц");
	times.Add("Год");

	Create(parent, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);

	wxBoxSizer* s_vbox;
	s_vbox = new wxBoxSizer(wxVERTICAL);

	m_staticText8 = new wxStaticText(this, wxID_ANY, wxT("Settings"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText8->Wrap(-1);
	s_vbox->Add(m_staticText8, 0, wxALIGN_CENTER | wxALL, 5);

	wxFlexGridSizer* s_settings_sizer;
	s_settings_sizer = new wxFlexGridSizer(5, 2, 5, 20);
	s_settings_sizer->SetFlexibleDirection(wxBOTH);
	s_settings_sizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn2 = new wxRadioButton(this, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer11->Add(m_radioBtn2, 0, wxALL, 5);

	m_staticText2 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText2->Wrap(-1);
	bSizer11->Add(m_staticText2, 0, wxALL, 5);


	s_settings_sizer->Add(bSizer11, 1, wxEXPAND, 5);
	wxBoxSizer* bSizer11300;
	bSizer11300 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText11 = new wxStaticText(this, wxID_ANY, wxT("Цвет заднего фона"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText11->Wrap(-1);
	bSizer11300->Add(m_staticText11, 0, wxALL, 5);

	m_color_pctr = new wxColourPickerCtrl(this, wxID_ANY, Settings::bg_color, wxDefaultPosition, wxDefaultSize, wxCLRP_SHOW_LABEL, wxDefaultValidator, wxColourPickerCtrlNameStr);
	bSizer11300->Add(m_color_pctr, 0, wxALL, 5);

	s_settings_sizer->Add(bSizer11300, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn21 = new wxRadioButton(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
	bSizer111->Add(m_radioBtn21, 0, wxALL, 5);

	m_staticText21 = new wxStaticText(this, wxID_ANY, wxT("Азтозапуск"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText21->Wrap(-1);
	bSizer111->Add(m_staticText21, 0, wxALL, 5);


	s_settings_sizer->Add(bSizer111, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer112;
	bSizer112 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn22 = new wxRadioButton(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
	bSizer112->Add(m_radioBtn22, 0, wxALL, 5);

	m_staticText22 = new wxStaticText(this, wxID_ANY, wxT("Скрываться в трей"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText22->Wrap(-1);
	bSizer112->Add(m_staticText22, 0, wxALL, 5);


	s_settings_sizer->Add(bSizer112, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer113;
	bSizer113 = new wxBoxSizer(wxHORIZONTAL);

	m_radioBtn23 = new wxRadioButton(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
	bSizer113->Add(m_radioBtn23, 0, wxALL, 5);

	m_staticText23 = new wxStaticText(this, wxID_ANY, wxT("Напоминать о сортировке"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText23->Wrap(-1);
	bSizer113->Add(m_staticText23, 0, wxALL, 5);


	s_settings_sizer->Add(bSizer113, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer1131;
	bSizer1131 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText11 = new wxStaticText(this, wxID_ANY, wxT("Считать файлы \"старыми\",\n если их открывали позже\n чем через:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText11->Wrap(-1);
	bSizer1131->Add(m_staticText11, 0, wxALL, 5);

	m_spinCtrl1 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
	bSizer1131->Add(m_spinCtrl1, 0, wxALL, 5);

	m_comboBox1 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, times);
	m_comboBox1->SetSelection(0);
	bSizer1131->Add(m_comboBox1, 0, wxALL, 5);


	s_settings_sizer->Add(bSizer1131, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer11311;
	bSizer11311 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText111 = new wxStaticText(this, wxID_ANY, wxT("Напоминать о сортировке каждые:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText111->Wrap(-1);
	bSizer11311->Add(m_staticText111, 0, wxALL, 5);

	m_spinCtrl11 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
	bSizer11311->Add(m_spinCtrl11, 0, wxALL, 5);

	m_comboBox11 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, times);
	m_comboBox11->SetSelection(0);
	bSizer11311->Add(m_comboBox11, 0, wxALL, 5);


	s_settings_sizer->Add(bSizer11311, 1, wxEXPAND, 5);


	s_vbox->Add(s_settings_sizer, 5, wxEXPAND, 5);

	wxBoxSizer* s_controll_sizer;
	s_controll_sizer = new wxBoxSizer(wxHORIZONTAL);

	s_ok_btn = new wxButton(this, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
	s_controll_sizer->Add(s_ok_btn, 0, wxALL | wxBOTTOM | wxRIGHT, 5);

	s_apply_btn = new wxButton(this, wxID_ANY, wxT("Apply"), wxDefaultPosition, wxDefaultSize, 0);
	s_controll_sizer->Add(s_apply_btn, 0, wxALL, 5);

	s_cancel_btn = new wxButton(this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	s_controll_sizer->Add(s_cancel_btn, 0, wxALL | wxBOTTOM | wxRIGHT, 5);


	s_vbox->Add(s_controll_sizer, 0, 0, 5);


	SetSizer(s_vbox);
	Layout();
	s_vbox->Fit(this);



	s_ok_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnOkBTNClick, this);
	s_apply_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnApplyBTNClick, this);
	s_cancel_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnCancelBTNClick, this);



}


OptionPanel::~OptionPanel()
{
}

void OptionPanel::OnOkBTNClick(wxCommandEvent& event)
{
}

void OptionPanel::OnApplyBTNClick(wxCommandEvent& event)
{
}

void OptionPanel::OnCancelBTNClick(wxCommandEvent& event)
{
}
