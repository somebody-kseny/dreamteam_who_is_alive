#include <iostream>
#include <cstring>
#include "information.h"

auto give_strok(std::string &str, int pos) {
	struct result { int st; int en; };

	while ((std::isspace(str[pos])) and (pos != str.length())) {
		pos++;
	}
	int end = pos;
	while ((not (std::isspace(str[end]))) and (end != str.length())) {
		end++;
	}
	if (end == pos) {
		return result{ 1, 1 };
	}
	return result {pos, end};


}




information::information(std::string str) {
	int count = 1;
	int pos = 0;
	while (true) {
		auto result = give_strok(str, pos);
		pos = result.en;
		if ((result.st == 1) and (result.en == 1)) { break; };
		switch (count)
		{
		case 1: {settypeOfModifer(str.substr(result.st, result.en - result.st)); break; }
		case 2: {setpathToProver(str.substr(result.st, result.en - result.st)); break; }
		case 3: {setkarantin(str.substr(result.st, result.en - result.st)); break; }
		}
		count++;
	}
}


int information::settypeOfModifer(std::string slov) {
	if (slov == "dir") {
		information::typeOfModifer = dir;
		return 0;
	}
	else if (slov == "file") {
		information::typeOfModifer = file;
		return 0;
	}
	else {
		return -1;
	}
}

int information::setpathToProver(std::string slov) {
	information::pathToProver = slov;
	return 0;
}

int information::setkarantin(std::string slov) {
	if (slov == "[true]") {
		information::karantin = true;
	}
	else if (slov == "[false]") {
		information::karantin = false;
	}
	else {
		return -1;
	}
}


