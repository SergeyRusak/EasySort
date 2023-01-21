#include "MainFrame.h"


MainFrame::MainFrame() : wxFrame(NULL, wxID_ANY, "Easy Sort - programm for sort files", wxDefaultPosition, wxSize(640, 360))
{ 
		

		Controller::init();

		wxArrayString times;
		times.Add("День");
		times.Add("Неделя");
		times.Add("Месяц");
		times.Add("Год");



		this->SetSizeHints(wxDefaultSize, wxDefaultSize);
		panels = new wxBoxSizer(wxVERTICAL);
		#pragma region MainWindow
		Main_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);
		Main_panel->SetBackgroundColour(Settings::bg_color);

		wxBoxSizer* m_hbox;
		m_hbox = new wxBoxSizer(wxHORIZONTAL);

		wxBoxSizer* m_options_vbox;
		m_options_vbox = new wxBoxSizer(wxVERTICAL);


		m_options_vbox->Add(0, 0, 1, 0, 5);

		m_option_btn1 = new wxButton(Main_panel, wxID_ANY, wxT("Настройки\nПриложения\n"), wxDefaultPosition, wxDefaultSize, 0);
		m_options_vbox->Add(m_option_btn1, 0, wxALIGN_LEFT | wxALL, 5);

		m_option_btn11 = new wxButton(Main_panel, wxID_ANY, wxT("Настройки\nСортировки\n"), wxDefaultPosition, wxDefaultSize, 0);
		m_options_vbox->Add(m_option_btn11, 0, wxALL, 5);

		m_option_btn12 = new wxButton(Main_panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
		m_options_vbox->Add(m_option_btn12, 0, wxALL, 5);

		m_option_btn13 = new wxButton(Main_panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
		m_options_vbox->Add(m_option_btn13, 0, wxALL, 5);

		m_option_btn14 = new wxButton(Main_panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
		m_options_vbox->Add(m_option_btn14, 0, wxALL, 5);

		m_option_btn15 = new wxButton(Main_panel, wxID_ANY, wxT("Об авторе"), wxDefaultPosition, wxDefaultSize, 0);
		m_options_vbox->Add(m_option_btn15, 0, wxALL, 5);
		wxStaticText* version = new wxStaticText(Main_panel, wxID_ANY, wxT("v:0.0.1"));
		
		m_options_vbox->Add(0, 0, 1, 0, 5);
		m_options_vbox->Add(version, 1);
		

		m_hbox->Add(m_options_vbox, 1, wxALL | wxEXPAND, 5);
		
		wxBoxSizer* m_main_vbox;
		m_main_vbox = new wxBoxSizer(wxVERTICAL);


		m_main_vbox->Add(0, 0, 1, 0, 5);

		m_start_sort_btn = new wxButton(Main_panel, wxID_ANY, wxT("Начать сортировку"), wxDefaultPosition, wxDefaultSize, 0);
		m_main_vbox->Add(m_start_sort_btn, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


		m_main_vbox->Add(0, 0, 1, 0, 5);


		m_hbox->Add(m_main_vbox, 5, wxEXPAND, 5);


		Main_panel->SetSizer(m_hbox);
		Main_panel->Layout();
		m_hbox->Fit(Main_panel);
		panels->Add(Main_panel, 1, wxEXPAND | wxALL, 5);
		#pragma endregion
		#pragma region SettingsWindow
		Settings_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);

		wxBoxSizer* s_vbox;
		s_vbox = new wxBoxSizer(wxVERTICAL);

		m_staticText8 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Settings"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText8->Wrap(-1);
		s_vbox->Add(m_staticText8, 0, wxALIGN_CENTER | wxALL, 5);

		wxFlexGridSizer* s_settings_sizer;
		s_settings_sizer = new wxFlexGridSizer(5, 2, 5, 20);
		s_settings_sizer->SetFlexibleDirection(wxBOTH);
		s_settings_sizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

		wxBoxSizer* bSizer11;
		bSizer11 = new wxBoxSizer(wxHORIZONTAL);

		m_radioBtn2 = new wxRadioButton(Settings_panel, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0);
		bSizer11->Add(m_radioBtn2, 0, wxALL, 5);

		m_staticText2 = new wxStaticText(Settings_panel, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText2->Wrap(-1);
		bSizer11->Add(m_staticText2, 0, wxALL, 5);


		s_settings_sizer->Add(bSizer11, 1, wxEXPAND, 5);
		wxBoxSizer* bSizer11300;
		bSizer11300 = new wxBoxSizer(wxHORIZONTAL);

		m_staticText11 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Цвет заднего фона"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText11->Wrap(-1);
		bSizer11300->Add(m_staticText11, 0, wxALL, 5);

		m_color_pctr = new wxColourPickerCtrl(Settings_panel, wxID_ANY, Settings::bg_color, wxDefaultPosition, wxDefaultSize, wxCLRP_SHOW_LABEL,wxDefaultValidator,wxColourPickerCtrlNameStr);
		bSizer11300->Add(m_color_pctr, 0, wxALL, 5);

		s_settings_sizer->Add(bSizer11300, 1, wxEXPAND, 5);

		wxBoxSizer* bSizer111;
		bSizer111 = new wxBoxSizer(wxHORIZONTAL);

		m_radioBtn21 = new wxRadioButton(Settings_panel, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
		bSizer111->Add(m_radioBtn21, 0, wxALL, 5);

		m_staticText21 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Азтозапуск"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText21->Wrap(-1);
		bSizer111->Add(m_staticText21, 0, wxALL, 5);


		s_settings_sizer->Add(bSizer111, 1, wxEXPAND, 5);

		wxBoxSizer* bSizer112;
		bSizer112 = new wxBoxSizer(wxHORIZONTAL);

		m_radioBtn22 = new wxRadioButton(Settings_panel, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
		bSizer112->Add(m_radioBtn22, 0, wxALL, 5);

		m_staticText22 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Скрываться в трей"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText22->Wrap(-1);
		bSizer112->Add(m_staticText22, 0, wxALL, 5);


		s_settings_sizer->Add(bSizer112, 1, wxEXPAND, 5);

		wxBoxSizer* bSizer113;
		bSizer113 = new wxBoxSizer(wxHORIZONTAL);

		m_radioBtn23 = new wxRadioButton(Settings_panel, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, 0);
		bSizer113->Add(m_radioBtn23, 0, wxALL, 5);

		m_staticText23 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Напоминать о сортировке"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText23->Wrap(-1);
		bSizer113->Add(m_staticText23, 0, wxALL, 5);


		s_settings_sizer->Add(bSizer113, 1, wxEXPAND, 5);

		wxBoxSizer* bSizer1131;
		bSizer1131 = new wxBoxSizer(wxHORIZONTAL);

		m_staticText11 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Считать файлы \"старыми\",\n если их открывали позже\n чем через:"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText11->Wrap(-1);
		bSizer1131->Add(m_staticText11, 0, wxALL, 5);

		m_spinCtrl1 = new wxSpinCtrl(Settings_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
		bSizer1131->Add(m_spinCtrl1, 0, wxALL, 5);

		m_comboBox1 = new wxChoice(Settings_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, times );
		m_comboBox1->SetSelection(0);
		bSizer1131->Add(m_comboBox1, 0, wxALL, 5);
		

		s_settings_sizer->Add(bSizer1131, 1, wxEXPAND, 5);

		wxBoxSizer* bSizer11311;
		bSizer11311 = new wxBoxSizer(wxHORIZONTAL);

		m_staticText111 = new wxStaticText(Settings_panel, wxID_ANY, wxT("Напоминать о сортировке каждые:"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText111->Wrap(-1);
		bSizer11311->Add(m_staticText111, 0, wxALL, 5);

		m_spinCtrl11 = new wxSpinCtrl(Settings_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0);
		bSizer11311->Add(m_spinCtrl11, 0, wxALL, 5);

		m_comboBox11 = new wxChoice(Settings_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, times);
		m_comboBox11->SetSelection(0);
		bSizer11311->Add(m_comboBox11, 0, wxALL, 5);


		s_settings_sizer->Add(bSizer11311, 1, wxEXPAND, 5);


		s_vbox->Add(s_settings_sizer, 5, wxEXPAND, 5);

		wxBoxSizer* s_controll_sizer;
		s_controll_sizer = new wxBoxSizer(wxHORIZONTAL);

		s_ok_btn = new wxButton(Settings_panel, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
		s_controll_sizer->Add(s_ok_btn, 0, wxALL | wxBOTTOM | wxRIGHT, 5);

		s_apply_btn = new wxButton(Settings_panel, wxID_ANY, wxT("Apply"), wxDefaultPosition, wxDefaultSize, 0);
		s_controll_sizer->Add(s_apply_btn, 0, wxALL, 5);

		s_cancel_btn = new wxButton(Settings_panel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
		s_controll_sizer->Add(s_cancel_btn, 0, wxALL | wxBOTTOM | wxRIGHT, 5);


		s_vbox->Add(s_controll_sizer, 0, 0, 5);


		Settings_panel->SetSizer(s_vbox);
		Settings_panel->Layout();
		s_vbox->Fit(Settings_panel);
		Settings_panel->Hide();
#pragma endregion
		#pragma region Progress_panel
		Progress_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);

		wxBoxSizer* p_vbox;
		p_vbox = new wxBoxSizer(wxVERTICAL);


		p_vbox->Add(0, 0, 1, 0, 5);

		p_status_bitmap = new wxStaticBitmap(Progress_panel, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0);
		p_vbox->Add(p_status_bitmap, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


		p_vbox->Add(0, 0, 1, 0, 5);;

		m_staticText9 = new wxStaticText(Progress_panel, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
		m_staticText9->Wrap(-1);
		p_vbox->Add(m_staticText9, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

		wxBoxSizer* p_prog_sizer;
		p_prog_sizer = new wxBoxSizer(wxHORIZONTAL);


		p_prog_sizer->Add(0, 0, 1, 0, 5);
		p_progress = new wxGauge(Progress_panel, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize);
		p_progress->SetValue(0);
		p_prog_sizer->Add(p_progress, 10, wxEXPAND, 5);
		//procdiag = new wxProgressDialog(wxString(""), wxString(""), 100, this);
		p_prog_sizer->Add(0, 0, 1);


		p_vbox->Add(p_prog_sizer, 0, wxEXPAND, 5);

		p_abort_btn = new wxButton(Progress_panel, wxID_ANY, wxT("Abort"), wxDefaultPosition, wxDefaultSize, 0);
		p_vbox->Add(p_abort_btn, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


		p_vbox->Add(0, 0, 1, 0, 5);


		Progress_panel->SetSizer(p_vbox);
		Progress_panel->Layout();
		p_vbox->Fit(Progress_panel);
		Progress_panel->Hide();
		#pragma endregion
		#pragma region SelectionWindow
		Select_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(640, 360), wxTAB_TRAVERSAL);
		Select_panel->SetBackgroundColour(Settings::bg_color);

		wxBoxSizer* sl_bSizer1;
		sl_bSizer1 = new wxBoxSizer(wxVERTICAL);

		wxBoxSizer* sl_bSizer2;
		sl_bSizer2 = new wxBoxSizer(wxHORIZONTAL);


		sl_bSizer2->Add(0, 0, 1, wxEXPAND, 5);

		sl_m_listBox1 = new wxListBox(Select_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB | wxLB_MULTIPLE);
		sl_bSizer2->Add(sl_m_listBox1, 20, wxEXPAND);


		sl_bSizer2->Add(0, 0, 1, wxEXPAND, 5);


		sl_bSizer1->Add(sl_bSizer2, 5, wxEXPAND | wxTOP, 5);

		sl_ftext = new wxStaticText(Select_panel, wxID_ANY, wxT("Files selected 0 from 100"), wxDefaultPosition, wxDefaultSize, 0);
		sl_ftext->Wrap(-1);
		sl_bSizer1->Add(sl_ftext, 0, wxALIGN_RIGHT | wxALL | wxRIGHT, 5);

		wxBoxSizer* sl_bSizer4;
		sl_bSizer4 = new wxBoxSizer(wxHORIZONTAL);

		sl_start_btn = new wxButton(Select_panel, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0);
		sl_bSizer4->Add(sl_start_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);

		sl_cancel_btn = new wxButton(Select_panel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
		sl_bSizer4->Add(sl_cancel_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);

		sl_sall_btn = new wxButton(Select_panel, wxID_ANY, wxT("Select All"), wxDefaultPosition, wxDefaultSize, 0);
		sl_bSizer4->Add(sl_sall_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);

		sl_snone_btn = new wxButton(Select_panel, wxID_ANY, wxT("Select None"), wxDefaultPosition, wxDefaultSize, 0);
		sl_bSizer4->Add(sl_snone_btn, 0, wxALIGN_BOTTOM | wxBOTTOM | wxRIGHT, 5);


		sl_bSizer1->Add(sl_bSizer4, 0, wxALIGN_RIGHT, 5);

		Select_panel->SetSizer(sl_bSizer1);
		Select_panel->Layout();
		sl_bSizer1->Fit(Select_panel);
		Select_panel->Hide();
#pragma endregion

		this->SetSizer(panels);
		this->Layout();
		this->Centre(wxBOTH);

		#pragma region ViewEvents
		m_option_btn1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnOptionBTNClick,this);
		m_start_sort_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnStartSortBTNClick, this);

		s_ok_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnOkBTNClick, this);
		s_apply_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnApplyBTNClick, this);
		s_cancel_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnCancelBTNClick, this);

		p_abort_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnAbortBTNClick, this);

		sl_sall_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnSAllBTNClick, this);
		sl_snone_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnSNoneBTNClick, this);
		sl_start_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnSstartBTNClick, this);
		sl_cancel_btn->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnScancelBTNClick, this);
		#pragma endregion
}
void MainFrame::Update_frame()
{
	Main_panel->SetBackgroundColour(Settings::bg_color);

}
MainFrame::~MainFrame()
{
	Controller::close();
		#pragma region ViewEventsUnbind
	m_option_btn1->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnOptionBTNClick, this);
	m_start_sort_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnStartSortBTNClick, this);
	s_ok_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnOkBTNClick, this);
	s_apply_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnApplyBTNClick, this);
	s_cancel_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnCancelBTNClick, this);
	p_abort_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnAbortBTNClick, this);
	sl_sall_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnSAllBTNClick, this);
	sl_snone_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnSNoneBTNClick, this);
	sl_start_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnSstartBTNClick, this);
	sl_cancel_btn->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrame::OnScancelBTNClick, this);
#pragma endregion
}

void MainFrame::OnOptionBTNClick(wxCommandEvent& event)
{
	ChangePanel(Main_panel, Settings_panel);
}
void MainFrame::OnStartSortBTNClick(wxCommandEvent& event)
{
	wxArrayString files = Controller::FileSearch(this);
	selectedDir = files.Last();
	files.RemoveAt(files.GetCount() - 1);
	ChangePanel(Main_panel, Select_panel);
	sl_m_listBox1->Append(files);
	
}

void MainFrame::OnOkBTNClick(wxCommandEvent& event)
{
	int settings[] = { m_spinCtrl11->GetValue(),m_comboBox11->GetSelection(),m_spinCtrl1->GetValue(),m_comboBox1->GetSelection(),m_color_pctr->GetColour().GetRGB() };
	Controller::SaveSettings(this, settings);
	Update_frame();
	ChangePanel(Settings_panel, Main_panel);
}
void MainFrame::OnApplyBTNClick(wxCommandEvent& event)
{
	int settings[] = { m_spinCtrl11->GetValue(),m_comboBox11->GetSelection(),m_spinCtrl1->GetValue(),m_comboBox1->GetSelection(),m_color_pctr->GetColour().GetRGB() };
	Controller::SaveSettings(this, settings);
}
void MainFrame::OnCancelBTNClick(wxCommandEvent& event)
{
	Update_frame();
	ChangePanel(Settings_panel, Main_panel);
	
}

void MainFrame::OnAbortBTNClick(wxCommandEvent& event)
{

	ChangePanel(Progress_panel, Main_panel);	
}

void MainFrame::OnSAllBTNClick(wxCommandEvent& event)
{
	int elems = sl_m_listBox1->GetCount();
	for (int i = 0; i < elems; i++) {
		sl_m_listBox1->Select(i);
	}
}
void MainFrame::OnSNoneBTNClick(wxCommandEvent& event)
{
	int elems = sl_m_listBox1->GetCount();
	for (int i = 0; i < elems; i++) {
		sl_m_listBox1->Deselect(i);
	}
}
void MainFrame::OnSstartBTNClick(wxCommandEvent& event)
{
	wxArrayString files = wxArrayString();
	for (int i = 0; i < sl_m_listBox1->GetStrings().GetCount(); i++) {
		if (sl_m_listBox1->IsSelected(i)) files.Add(sl_m_listBox1->GetString(i));
	}
	ChangePanel(Select_panel, Progress_panel);
	Controller::SortFiles(&files, selectedDir, p_progress);
	wxMessageDialog* doneModal = new wxMessageDialog(this, wxT("Файлы отсортированны!"), "Готово");
	doneModal->ShowModal();
	ChangePanel(Progress_panel, Main_panel);
}
void MainFrame::OnScancelBTNClick(wxCommandEvent& event)
{
	ChangePanel(Select_panel, Main_panel);
}

void MainFrame::ChangePanel(wxPanel* current, wxPanel* next) {
	
	panels->Detach(0);
	current->Hide();
	panels->Prepend(next, 1, wxGROW);
	next->Show();
	panels->Layout();

}