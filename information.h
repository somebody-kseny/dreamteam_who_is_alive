#pragma once //NO LINT

#include <iostream>

enum typework {
	dir,
	file,
};

class information {
	public:
		explicit information(std::string stroka_is_consoli);
		information() = delete;
		~information() = default;

		int settypeOfModifer(std::string slov);
		int setpathToProver(std::string slov);
		int setkarantin(std::string slov);

		std::string get_typeOfModifer() const;
		std::string get_pathToProver() const;
		std::string get_karantin() const;
	
	private:
		typework typeOfModifer;
		std::string pathToProver;
		bool karantin = false;


};
