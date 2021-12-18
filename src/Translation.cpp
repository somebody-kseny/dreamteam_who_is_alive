#include "Translation.h"
#include "DirectoryWorker.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
using namespace std;


string Translation::kod_simbol(char c) {
        string res = "";
        char h1 = c / 16;
        char h2 = c % 16;
        if (h1 >= 0 && h1 <= 9) {
            h1 += '0';
        }
        else if (h1 >= 10 && h1 <= 15) {
            h1 -= 10 - 'A';
        }
        if (h2 >= 0 && h2 <= 9) {
            h2 += '0';
        }
        else if (h2 >= 10 && h2 <= 15) {
            h2 -= 10 - 'A';
        }
        res.push_back(h1);
        res.push_back(h2);
        return res;
    };
string Translation::kod_str(string s) {
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            res = res + kod_simbol(s[i]) + " ";
        }
        return res;
    };
void Translation::kod_file(string path1, string path2) {
        vector<string> res ;
        ifstream fin;
        fin.open(path1, ios::binary);
        ofstream fout;
        fout.open(path2, ios_base::app);
        while (!fin.eof()) {
            string s;
            fin >> s;
            fout<<kod_str(s);
        }
        fin.close();
        fout.close();
    };


