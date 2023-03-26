#include "SortArchive.h"

SortArchive::SortArchive()
{
    sortdist ach;
    ach.name = wxString("Archive");
    ach.next = nullptr;
    sortdist sort;
    sort.next = nullptr;
    sort.name = wxString("Sorted");

    nextsorts.routes.push_back(ach);
    nextsorts.routes.push_back(sort);
}

sortdist* SortArchive::sort(std::filesystem::path file)
{
    struct stat buff;
    time_t curr_time;
    curr_time = time(NULL);
    stat(file.string().c_str(), &buff);
    if ((curr_time - buff.st_mtime) >= Settings::last_modify_to_archive_count * Settings::last_modify_to_archive_mod) {
        return &nextsorts.routes[0];
    }
    else {
        return &nextsorts.routes[1];

    }

    return nullptr;
}
