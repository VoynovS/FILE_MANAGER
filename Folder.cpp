#include "Folder.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>




//Create the folder
void createFolder(std::string& str) {
	CreateDirectoryA(str.c_str(), NULL);
}

//Delete the folder
void deleteFolder(std::string& str) {
	RemoveDirectoryA(str.c_str());
}

//Rename the folder 
void renameFolder(std::string& a) {
	char oldF[256];
	std::cin >> oldF;
	char oldF1[256];
	char newF1[256];
	
	std::cin >> oldF1;
	std::cin >> newF1;
	
	std::string combined = std::string(oldF) + oldF1;
	const char* result = combined.c_str();
	std::string combined2 = std::string(oldF) + newF1;
	const char* result2 = combined2.c_str();
	std::cout << result << std::endl << result2 << std::endl;
	if (rename(result, result2) == 0)
		std::cout << "Folder renamed!" << std::endl;
	else
		std::cout << "Folder not renamed!" << std::endl;
	
}

//Remove folder
	/*void removeFolder(char oldF[], char newF[]) {


		if (oldF == newF) {
			MoveFileA(oldF, newF);
			if (MoveFileA(oldF, newF) == 0)
				std::cout << "Folder removed." << std::endl;
			else
				std::cout << "Folder not removed." << std::endl;

		}
		else
			std::cout << "Folder not removed";
	}*/