
#include "Core.h"
#include <wx/log.h>

int Core::move(std::string origin, std::string destination, bool overwrite)
{
    try {

    if (overwrite && std::filesystem::exists(destination)) {
        std::filesystem::remove(destination);
    }
        std::filesystem::copy(origin, destination);
        std::filesystem::remove(origin);
    }
    catch (std::filesystem::filesystem_error& e) {
        std::wcerr<< e.what() << '\n';
        return -1;
    }
    return 0;
}

std::vector<wxString> Core::getFiles(std::string path,int& files_count, bool recursive)
{
    std::vector<wxString> files;
    files_count = 0;
    try {
        for (const auto& entry : std::filesystem::directory_iterator(path)) {
            if (recursive && entry.is_directory()) {
                std::vector<wxString> temp = Core::getFiles(entry.path().string(),files_count, recursive);
                files.insert(files.end(), temp.begin(), temp.end());
            }
            if (entry.is_regular_file()) {
                files.push_back(entry.path().string());
                files_count++;
            }

        }
    }
    catch (std::filesystem::filesystem_error& e) {
        wxLogError(e.what());
        return files;
    }
    catch (std::system_error & e) {
        wxLogError(e.what());
        return files;
    }
    return files;
}
