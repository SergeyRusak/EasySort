
#include "Core.h"
#include <wx/log.h>



int Core::move(std::filesystem::path origin, std::filesystem::path destination, bool overwrite)
{
    try {

    if (std::filesystem::exists(destination)) {
        if (overwrite) {
            std::filesystem::remove(destination);
        }
        else {
            int i = 0;
            while (std::filesystem::exists(destination.parent_path().string() +
                "\\" +
                destination.stem().string() +
                "(" + std::to_string(i) + ")" +
                destination.extension().string())) {
                i++;
            }
            destination = std::filesystem::path(destination.parent_path().string() +
                "\\" +
                destination.stem().string() + ((i>0)?(
                "(" + std::to_string(i) + ")"):("") )+
                destination.extension().string());
        }
    }
        std::filesystem::copy(origin, destination);
        std::filesystem::remove(origin);
    }
    catch (std::filesystem::filesystem_error& e) {
        wxLogError(e.what());
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

int Core::createDir(std::filesystem::path path)
{
    if (!std::filesystem::exists(path.parent_path()))
        std::filesystem::create_directories(path.parent_path());

    return 0;
}

std::string Core::sort(std::filesystem::path file, std::string startDir)
{
    struct stat buff;
    time_t curr_time;
    curr_time = time(NULL);
    stat(file.string().c_str(),&buff);
    std::string result = startDir + "\\";
    if ((curr_time - buff.st_mtime) >= Settings::last_modify_to_archive_count * Settings::last_modify_to_archive_mod) {
        result += "Archived\\";
    }
    else {
        result += "Sorted\\";
    
    }
     result += file.extension().string().substr(1)
       + "\\"
       + file.filename().string();
    std::stringstream ss;
    ss << (curr_time - buff.st_mtime);
    wxLogMessage(wxString(ss.str()));
    return  result;
}
