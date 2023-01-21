#pragma once
#include <wx/string.h>
#include <iostream>
#include <filesystem>
#include <sys\stat.h>
#include <time.h>
#include <sstream>
#include "Settings.h"
class Core
{
public:
	static int move(std::filesystem::path origin, std::filesystem::path destination, bool overwrite);

	static wxArrayString getFiles(std::string path, bool recursive);

	static int createDir(std::filesystem::path path);

	static std::string sort(std::filesystem::path file, std::string startDir);



};
