#pragma once
#include <wx/custombgwin.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/gauge.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include "Controller.h"
class ProgressPanel : public wxCustomBackgroundWindow<wxPanel>
{
public:
	wxStaticBitmap* p_status_bitmap;
	wxStaticText* m_staticText9;
	wxGauge* p_progress;
	wxButton* p_abort_btn;

	ProgressPanel(wxWindow* parent);
	~ProgressPanel();

	void OnAbortBTNClick(wxCommandEvent& event);

};

