#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>


//Rename folder ++
/*void renameF(char oldF[], char oldF1[], char newF[], char newF1[]) {
	newF = oldF;
	std::cout << oldF << std::endl << newF << std::endl;
	if (oldF == newF) {
		std::string combined = std::string(oldF) + oldF1;
		const char* result = combined.c_str();
		std::string combined2 = std::string(newF) + newF1;
		const char* result2 = combined2.c_str();

		if (rename(result, result2) == 0)
			std::cout << "Folder renamed!" << std::endl;
		else
			std::cout << "Folder not renamed1." << std::endl;
	}
	else
		std::cout << "Folder not renamed" << std::endl;

} */

//RenameFolder ++
/*void renameFolder(std::string& a) {
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
		std::cout << "Folder not renamed1." << std::endl;

}*/

//Remove folder
void removeFolder(std::string& a) {
	char oldF[256];
	char oldF1[256];
	char newF[256];

	std::cin >> oldF;
	
	std::cin >> oldF1;
	std::cin >> newF;

	std::string combined = std::string(oldF) + oldF1;
	const char* result = combined.c_str();
	std::string combined2 = std::string(newF) + oldF1;
	const char* result2 = combined2.c_str();

		
	/*if (oldF != newF) {
		MoveFileA(result, result2);
		if (MoveFileA(result, result2) == 0)
			std::cout << "Folder removed: " << result2 << std::endl;
		else
			std::cout << "Folder not removed." << std::endl;

	}
	else
		std::cout << "Folder not removed";*/
}