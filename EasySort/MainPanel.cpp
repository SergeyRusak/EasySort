#include "MainPanel.h"



MainPanel::MainPanel(wxWindow* parent)
{
	Create(parent, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);
	wxBoxSizer* m_hbox;
	m_hbox = new wxBoxSizer(wxHORIZONTAL);
	wxBoxSizer* m_options_vbox;
	m_options_vbox = new wxBoxSizer(wxVERTICAL);
	m_options_vbox->Add(0, 0, 1, 0, 5);
	m_option_btn1 = new wxButton(this, wxID_ANY, wxT("Настройки\nПриложения\n"), wxDefaultPosition, wxDefaultSize, 0);
	m_options_vbox->Add(m_option_btn1, 0, wxALIGN_LEFT | wxALL, 5);
	m_option_btn11 = new wxButton(this, wxID_ANY, wxT("Настройки\nСортировки\n"), wxDefaultPosition, wxDefaultSize, 0);
	m_options_vbox->Add(m_option_btn11, 0, wxALL, 5);
	m_option_btn15 = new wxButton(this, wxID_ANY, wxT("Об авторе"), wxDefaultPosition, wxDefaultSize, 0);
	m_options_vbox->Add(m_option_btn15, 0, wxALL, 5);
	wxStaticText* version = new wxStaticText(this, wxID_ANY, wxT("v:0.0.1"));
	m_options_vbox->Add(0, 0, 1, 0, 5);
	m_options_vbox->Add(version, 1);
	m_hbox->Add(m_options_vbox, 1, wxALL | wxEXPAND, 5);
	wxBoxSizer* m_main_vbox;
	m_main_vbox = new wxBoxSizer(wxVERTICAL);
	m_main_vbox->Add(0, 0, 1, 0, 5);
	m_start_sort_btn = new wxButton(this, wxID_ANY, wxT("Начать сортировку"), wxDefaultPosition, wxDefaultSize, 0);
	m_main_vbox->Add(m_start_sort_btn, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);
	m_main_vbox->Add(0, 0, 1, 0, 5);
	m_hbox->Add(m_main_vbox, 5, wxEXPAND, 5);
	SetSizer(m_hbox);
	Layout();
	m_hbox->Fit(this);


	m_option_btn1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnOptionBTNClick, this);
	m_start_sort_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnStartSortBTNClick, this);
}

void MainPanel::OnOptionBTNClick(wxCommandEvent& event)
{
}

void MainPanel::OnStartSortBTNClick(wxCommandEvent& event)
{
}

MainPanel::~MainPanel()
{
}

