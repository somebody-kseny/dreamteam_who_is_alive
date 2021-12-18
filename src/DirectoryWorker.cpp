#include "DirectoryWorker.h"
#include "Translation.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;

vector<filesystem::path> DirectoryWorker::getAllFiles(const filesystem::path path)
            {
                vector<filesystem::path> res;
                for (auto it : filesystem::recursive_directory_iterator{ path })
                {
                    if (!it.is_directory())
                    {
                        res.push_back(it);
                        //cout << it << endl;
                    }
                }
                return res;
            };
void DirectoryWorker::scanFile(const filesystem::path path , string path1)
            {
                ifstream fin;
                fin.open(path);
                string s, find;
                char c;
                while (!fin.eof()) {
                    fin.get(c);
                    s.push_back(c);
                }
                fin.close();
                fin.open("/Users/ivan/SIGNATUR/SIGNATURE.txt");
                while (!fin.eof())
                {
                    string sample;
                    getline(fin, sample);
                    if (s.find(sample) != string::npos)
                    {
                        fileToQuarantine(path1);
                        cout << "Quarantine: " << path1 << endl;
                        return;
                    } //else {
                        //cout << "Our file good "<< endl;
                        //break;
                    //}
                }
                fin.close();
            };
void DirectoryWorker::fileToQuarantine(const filesystem::path filePath) {
    filesystem::path qpath {"QUARANTINE"};
    filesystem::copy(filePath, "QUARANTINE");
                filesystem::remove(filePath);
            };
