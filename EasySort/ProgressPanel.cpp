#include "ProgressPanel.h"

ProgressPanel::ProgressPanel(wxWindow* parent) {
	Create(parent, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);


	wxBoxSizer* p_vbox;
	p_vbox = new wxBoxSizer(wxVERTICAL);


	p_vbox->Add(0, 0, 1, 0, 5);

	p_status_bitmap = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
	p_vbox->Add(p_status_bitmap, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


	p_vbox->Add(0, 0, 1, 0, 5);;

	m_staticText9 = new wxStaticText(this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText9->Wrap(-1);
	p_vbox->Add(m_staticText9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* p_prog_sizer;
	p_prog_sizer = new wxBoxSizer(wxHORIZONTAL);


	p_prog_sizer->Add(0, 0, 1, 0, 5);
	p_progress = new wxGauge(this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize);
	p_progress->SetValue(0);
	p_prog_sizer->Add(p_progress, 10, wxEXPAND, 5);
	p_prog_sizer->Add(0, 0, 1);


	p_vbox->Add(p_prog_sizer, 0, wxEXPAND, 5);

	p_abort_btn = new wxButton(this, wxID_ANY, wxT("Abort"), wxDefaultPosition, wxDefaultSize, 0);
	p_vbox->Add(p_abort_btn, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


	p_vbox->Add(0, 0, 1, 0, 5);


	SetSizer(p_vbox);
	Layout();
	p_vbox->Fit(this);

	p_abort_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &OnAbortBTNClick, this);
}


ProgressPanel::~ProgressPanel()
{
}

void ProgressPanel::OnAbortBTNClick(wxCommandEvent& event)
{
}
