#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>

//Create the folder
void createF(std::string& str); 
//Delete the folder
void deleteF(std::string& str) {
	RemoveDirectoryA(str.c_str());
}

//Rename the folder 
void renameFolder(char oldF[], char newF[]) {


	//char oldfilename[50] = "123456";                   // old name file
	//char newfilename[50] = "888";
	if (rename(oldF, newF) == 0)
		//if (rename(str, str2) == 0)
		std::cout << "File rename!" << std::endl;
	else
		std::cout << "File not rename." << std::endl;
}

//Remove folder
void removeF(char oldF[], char newF[]) {
	MoveFileA(oldF, newF);
	if (oldF == newF) {
		if (MoveFileA(oldF, newF) == 0)
			std::cout << "File remove." << std::endl;
		else
			std::cout << "File NOT remove." << std::endl;
	}
	else
		std::cout << "File NOT remove." << std::endl;
}
