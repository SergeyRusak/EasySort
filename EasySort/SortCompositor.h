#pragma once
#include <filesystem>
class SortCompositor
{
public:
	virtual std::string Sort(std::filesystem::path file) = 0;
protected:
	std::vector<SortCompositor*> _next;
	std::vector<std::string> _name;
	std::vector<std::string> _criteria;
};

