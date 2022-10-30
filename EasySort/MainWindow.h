#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bmpbuttn.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/dirdlg.h>
class MainWindow : public wxFrame
{

public:
	


	MainWindow();
	~MainWindow();

	void OnStartSort(wxCommandEvent& WXUNUSED);

	void OnQuit(wxCommandEvent& event);

};
