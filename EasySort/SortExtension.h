#pragma once
#include "SortCore.h"

class SortExtension :
    public SortCore
{
    sortArray<std::string> nextsorts;
public:
    SortExtension();
    sortdist sort(std::filesystem::path file) override;

};

