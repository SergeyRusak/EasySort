#include "Controller.h"

void Controller::init()
{
	Settings::load();

}

void Controller::close()
{
Settings::save();
}

void Controller::ShowFiles(wxWindow* frame)
{
	wxDirDialog* dirDialog = new wxDirDialog(frame);
	if (dirDialog->ShowModal() == wxID_OK)
	{
		wxString selectedDir = dirDialog->GetPath();
		int files_count(0);
		std::vector<wxString> files = Core::getFiles(selectedDir.ToStdString(),files_count, true);
		wxString text("Found files:"+std::to_string(files_count));
		wxMessageDialog* i = new wxMessageDialog(frame, text);
		i->ShowModal();
	}
}

void Controller::SortFiles(wxWindow* frame)
{
	wxDirDialog* dirDialog = new wxDirDialog(frame);
	if (dirDialog->ShowModal() == wxID_OK)
	{
		wxString selectedDir = dirDialog->GetPath();
		int files_count(0);
		wxMessageDialog* dorecursive = new wxMessageDialog(frame,wxT("?????????? ????? ? ??????, ??????? ????? ?????? ????? ?? ???? ("+selectedDir + ")?"), "????????????? ????? ?????? ??????",wxYES_NO|wxCENTER|wxNO_DEFAULT|wxICON_QUESTION);

		bool recursive = dorecursive->ShowModal() == wxID_YES;


		std::vector<wxString> files = Core::getFiles(selectedDir.ToStdString(), files_count, recursive);
		wxString text("Found files:" + std::to_string(files_count));
		wxMessageDialog* i = new wxMessageDialog(frame, text);
		i->ShowModal();

		for (int j=0; j< files.size(); j++)
		{
			std::filesystem::path temp(files.at(j).ToStdString());
			
			std::filesystem::path destinate = Core::sort(temp, selectedDir.ToStdString());
			Core::createDir(destinate);
			Core::move(temp, destinate, false);


		}
	}
}

void Controller::SaveSettings(wxWindow* frame, int* settings)
{
	Settings::last_modify_to_archive_count = settings[0];
	Settings::last_modify_to_archive_mod = All[settings[1]];
	Settings::create_to_archive_count = settings[2];
	Settings::create_to_archive_mod = All[settings[3]];
	Settings::bg_color = wxColour(settings[4]);
}
