#pragma once
#include <wx/dirdlg.h>
#include <wx/msgdlg.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>
#include <wx/gauge.h>
#include "Core.h"
class Controller
{
public:
	Core* core;
	Controller();
	~Controller();
	wxString selectedDir;
	void ShowFiles(wxWindow* frame);
	wxArrayString FileSearch(wxWindow* frame);
	void SortFiles(wxArrayString* files, wxString selectedDir, wxGauge* progress);
	void SaveSettings(wxWindow* frame, int* settings);



};

