#pragma once
#include <wx/string.h>
#include <iostream>
#include <filesystem>
class Core
{
public:
	static int move(std::string origin, std::string destination, bool overwrite);

	static std::vector<wxString> getFiles(std::string path, int& files_count, bool recursive);




};
