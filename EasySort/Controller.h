#pragma once
#include <wx/dirdlg.h>
#include <wx/msgdlg.h>
#include <wx/spinctrl.h>
#include <wx/combobox.h>
#include "Core.h"
class Controller
{
public:
	static void init();
	static void close();
	static void ShowFiles(wxWindow* frame);

	static void SortFiles(wxWindow* frame);

	static void SaveSettings(wxWindow* frame, int* settings);



};

