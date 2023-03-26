#pragma once
#include "SortCore.h"
#include "Settings.h"
class SortArchive :
    public SortCore
{
public:
    sortArray<int> nextsorts;
    SortArchive();

    sortdist sort(std::filesystem::path file) override;
};

