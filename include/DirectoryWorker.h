#ifndef SCANER__DIRECTORYWORKER_H
#define SCANER__DIRECTORYWORKER_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;
class DirectoryWorker
        {
        public:

            vector<filesystem::path> getAllFiles(const filesystem::path path);
            void scanFile(const filesystem::path path , string path1);
            void fileToQuarantine(const filesystem::path filePath);
        };

#endif //SCANER_DIRECTORYWORKER_H

