#pragma once
#include <vector>
#include <string>
#include <filesystem>
#include <sstream>
struct sortdist {
	
	std::string name;
	int next;
};
struct SortArchive {
	std::string* criterias = nullptr;
	sortdist* routes = nullptr;
};
extern class SortSystem
{
public:
	 static std::vector<SortArchive> data;
	 static std::vector<sortdist*(*)(std::filesystem::path file, int index)> funcs;

	static std::string sort(std::filesystem::path file);
	static void init();
private:
	static sortdist* sortExtension(std::filesystem::path file, int index);
	static sortdist* sortArchive(std::filesystem::path file, int index);


};