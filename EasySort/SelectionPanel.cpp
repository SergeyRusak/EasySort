#include "SelectionPanel.h"


SelectionPanel::SelectionPanel(wxWindow* parent)
{
	Create(parent, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);
	wxBoxSizer* sl_bSizer1;
	sl_bSizer1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* sl_bSizer2;
	sl_bSizer2 = new wxBoxSizer(wxHORIZONTAL);


	sl_bSizer2->Add(0, 0, 1, wxEXPAND, 5);

	sl_m_listBox1 = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB | wxLB_MULTIPLE);
	sl_bSizer2->Add(sl_m_listBox1, 20, wxEXPAND);


	sl_bSizer2->Add(0, 0, 1, wxEXPAND, 5);


	sl_bSizer1->Add(sl_bSizer2, 5, wxEXPAND | wxTOP, 5);

	sl_ftext = new wxStaticText(this, wxID_ANY, wxT("Files selected 0 from 100"), wxDefaultPosition, wxDefaultSize, 0);
	sl_ftext->Wrap(-1);
	sl_bSizer1->Add(sl_ftext, 0, wxALIGN_RIGHT | wxALL | wxRIGHT, 5);

	wxBoxSizer* sl_bSizer4;
	sl_bSizer4 = new wxBoxSizer(wxHORIZONTAL);

	sl_start_btn = new wxButton(this, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0);
	sl_bSizer4->Add(sl_start_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);

	sl_cancel_btn = new wxButton(this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	sl_bSizer4->Add(sl_cancel_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);

	sl_sall_btn = new wxButton(this, wxID_ANY, wxT("Select All"), wxDefaultPosition, wxDefaultSize, 0);
	sl_bSizer4->Add(sl_sall_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);

	sl_snone_btn = new wxButton(this, wxID_ANY, wxT("Select None"), wxDefaultPosition, wxDefaultSize, 0);
	sl_bSizer4->Add(sl_snone_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);


	sl_bSizer1->Add(sl_bSizer4, 0, wxALIGN_RIGHT, 5);

	SetSizer(sl_bSizer1);
	Layout();
	sl_bSizer1->Fit(this);


	sl_sall_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnSAllBTNClick, this);
	sl_snone_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnSNoneBTNClick, this);
	sl_start_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnSstartBTNClick, this);
	sl_cancel_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnScancelBTNClick, this);

}

SelectionPanel::~SelectionPanel()
{
	sl_sall_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &OnSAllBTNClick, this);
	sl_snone_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &OnSNoneBTNClick, this);
	sl_start_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &OnSstartBTNClick, this);
	sl_cancel_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &OnScancelBTNClick, this);
}

void SelectionPanel::OnSAllBTNClick(wxCommandEvent& event)
{
}

void SelectionPanel::OnSNoneBTNClick(wxCommandEvent& event)
{
}

void SelectionPanel::OnSstartBTNClick(wxCommandEvent& event)
{
}

void SelectionPanel::OnScancelBTNClick(wxCommandEvent& event)
{
}
