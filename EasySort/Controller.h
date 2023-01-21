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
	static void init();
	static void close();
	static void ShowFiles(wxWindow* frame);
	static wxArrayString FileSearch(wxWindow* frame);

	static void SortFiles(wxArrayString* files, wxString selectedDir, wxGauge* progress);

	static void SaveSettings(wxWindow* frame, int* settings);



};

