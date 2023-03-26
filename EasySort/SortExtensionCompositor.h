#pragma once
#include "SortCompositor.h"
#include <sstream>
class SortExtensionCompositor :
    public SortCompositor
{
public:
    SortExtensionCompositor();
    std::string Sort(std::filesystem::path file) override;

};

