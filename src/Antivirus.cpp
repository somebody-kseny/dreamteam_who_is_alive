#include "Antivirus.h"
#include "DirectoryWorker.h"
#include "Translation.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;

void Antivirus(string path){
    DirectoryWorker *dw = new DirectoryWorker();
    vector<filesystem::path> arr = dw->getAllFiles
            (path);
    Translation t;
    for (int i = 0 ; i < arr.size();i++)
    {
        if (arr[i] != path + "/.DS_Store"){
            t.kod_file(arr[i], "temp.txt");
            dw->scanFile("temp.txt", arr[i]);
            filesystem::remove("temp.txt");
        }
    }
}
