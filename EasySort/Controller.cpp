#include "Controller.h"

void Controller::ShowFiles(wxWindow* frame)
{
	wxDirDialog* dirDialog = new wxDirDialog(frame);
	if (dirDialog->ShowModal() == wxID_OK)
	{
		wxString selectedDir = dirDialog->GetPath();
		int files_count(0);
		std::vector<wxString> files = Core::getFiles(selectedDir.c_str().AsChar(),files_count, true);
		wxString text("Found files:"+std::to_string(files_count));
		wxMessageDialog* i = new wxMessageDialog(frame, text);
		i->ShowModal();
	}
}
