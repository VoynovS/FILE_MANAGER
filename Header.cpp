#include "Header.h"




//Create the folder
void createF(std::string& str) {
	CreateDirectoryA(str.c_str(), NULL);
}