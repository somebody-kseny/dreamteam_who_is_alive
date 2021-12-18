#ifndef SCANER__TRANSLATION_H
#define SCANER__TRANSLATION_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;

class Translation {
private:
    string kod_simbol(char c);
public:
    string kod_str(string s);
    void kod_file(string path1, string path2);
};


#endif //SCANER_TRANSLATION_H
