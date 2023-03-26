#pragma once
#include <filesystem>
#include "sortArray.h"



class SortCore
{
public:
	std::string name;
	virtual sortdist sort(std::filesystem::path file) = 0;



	virtual ~SortCore() = default;

};



