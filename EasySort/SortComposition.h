#pragma once
#include "SortExtensionCompositor.h"
class SortComposition
{
public:
	SortComposition();
	std::string Sort(std::filesystem::path file);
private:
	SortCompositor* _compositor;


};

