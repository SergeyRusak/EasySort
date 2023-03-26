#include "Controller.h"
Controller::Controller()
{
	Settings::load();
	core = new Core();

}

Controller::~Controller()
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
		wxArrayString files = core->getFiles(selectedDir.ToStdString(), true);
		wxString text("Found files:"+std::to_string(files.size()));
		wxMessageDialog* i = new wxMessageDialog(frame, text);
		i->ShowModal();
	}
}

wxArrayString Controller::FileSearch(wxWindow* frame)
{
	wxArrayString files = wxArrayString();
	wxDirDialog* dirDialog = new wxDirDialog(frame);
	if (dirDialog->ShowModal() == wxID_OK)
	{
		wxString selectedDir = dirDialog->GetPath();
		int files_count(0);
		wxMessageDialog* dorecursive = new wxMessageDialog(frame, wxT("Обработать файлы в папках, которые лежат внутри папки по пути (" + selectedDir + ")?"), "Анализировать файлы внутри папок?", wxYES_NO | wxCENTER | wxNO_DEFAULT | wxICON_QUESTION);

		bool recursive = dorecursive->ShowModal() == wxID_YES;
		files = core->getFiles(selectedDir.ToStdString(), recursive);
		files.Add(selectedDir);
	}
	else {
		files.Add("null");
	}
	return files;
}

void Controller::SortFiles(wxArrayString* files, wxString selectedDir, wxGauge* progress){
	progress->SetRange(files->size()-1);
	
		
		for (int j=0; j< files->size(); j++)
		{
			progress->SetValue(j);
			std::filesystem::path temp(files->Item(j).ToStdString());
			
			std::filesystem::path destinate = core->sort(temp, selectedDir);
			core->createDir(destinate);
			core->move(temp, destinate, false);


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
