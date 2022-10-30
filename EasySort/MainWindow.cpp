#include "MainWindow.h"

MainWindow::MainWindow() : wxFrame(NULL, wxID_ANY, "Easy Sort - programm for sort files", wxDefaultPosition, wxSize(640,360)) 
{
	wxPanel* panel = new wxPanel(this,wxID_ANY);
	panel->SetBackgroundColour(wxColor(100, 100, 200));
	wxBoxSizer* hbox = new wxBoxSizer(wxHORIZONTAL);
	wxBoxSizer* options_vbox = new wxBoxSizer(wxVERTICAL);
	

	//options_vbox->Add(0, 0, 1, wxALIGN_CENTER_HORIZONTAL | wxEXPAND, 5);

	wxButton* option_btn1 = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	options_vbox->Add(option_btn1, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxButton* option_btn2 = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	options_vbox->Add(option_btn2, 0, wxALL, 5);

	wxButton* option_btn3 = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	options_vbox->Add(option_btn3, 0, wxALL, 5);

	wxButton* option_btn4 = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	options_vbox->Add(option_btn4, 0, wxALL, 5);

	wxButton* option_btn5 = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	options_vbox->Add(option_btn5, 0, wxALL, 5);

	wxButton* option_btn6 = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	options_vbox->Add(option_btn6, 0, wxALL, 5);


	//options_vbox->Add(0, 0, 1, wxEXPAND, 5);


	hbox->Add(options_vbox, 1, wxALL | wxEXPAND, 5);

	wxBoxSizer* main_vbox = new wxBoxSizer(wxVERTICAL);


	//main_vbox->Add(0, 0, 1, wxEXPAND, 5);

	wxButton* start_sort_btn = new wxButton(panel, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0);
	main_vbox->Add(start_sort_btn, 0, wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL | wxALL, 5);


	//main_vbox->Add(0, 0, 1, wxEXPAND, 5);

	
	hbox->Add(main_vbox, 5, wxEXPAND, 5);

	
	panel->SetSizer(hbox);
	
	this->Centre();
}
MainWindow::~MainWindow()
{

}
