#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void printTree(const fs::path& path, const std::string& prefix = "") {
    if (!fs::exists(path) || !fs::is_directory(path)) return;

    for (auto const& entry : fs::directory_iterator(path)) {
        std::cout << prefix << "|-- " << entry.path().filename().string() << std::endl;
        if (fs::is_directory(entry.path())) {
            printTree(entry.path(), prefix + "|   ");
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./tree <directory_path>" << std::endl;
        return 1;
    }

    fs::path rootPath(argv[1]);
    std::cout << rootPath.filename().string() << std::endl;
    printTree(rootPath);

    return 0;
}
