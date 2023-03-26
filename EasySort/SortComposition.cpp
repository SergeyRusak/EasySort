#include "SortComposition.h"

SortComposition::SortComposition()
{
    _compositor = new SortExtensionCompositor();
}

std::string SortComposition::Sort(std::filesystem::path file)
{
    return _compositor->Sort(file);
}
