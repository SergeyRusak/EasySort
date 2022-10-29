#include "MainWindow.h"
MainWindow::MainWindow() : wxFrame(NULL, wxID_ANY, "Easy Sort - programm for sort files") 
{
	wxButton* exit_button = new wxButton(this, wxID_EXIT, wxT("Выход"));


}
MainWindow::~MainWindow()
{

}