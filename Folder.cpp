#include "Folder.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>




//Create the folder
void createF(std::string& str) {
	CreateDirectoryA(str.c_str(), NULL);
}

//Delete the folder
void deleteF(std::string& str) {
	RemoveDirectoryA(str.c_str());
}

//Rename the folder 
void renameFolder(char oldF[], char newF[]) {
	/*char OLD[256];
	//функция стандартной библиотеки языка программирования Си 
	//для копирования нуль-терминированной строки (включая нуль-терминатор) в заданный буфер.
	strcpy(OLD, oldF);
	//Функция strcat() присоединяет к строке str1 копию строки str2 и завершает строку str1 нулевым символом
	strcat(OLD, oldF1);
	std::cout << OLD << std::endl;
	char NEW[256];
	strcpy(NEW, newF);
	strcat(NEW, newF1);
	std::cout << NEW << std::endl;*/

	/*std::string str;
	str += oldF;
	str += oldF1;
	
	std::cout << str << "\t" << str.length() << std::endl;

	std::string str1;
	str1 += newF;
	str1 += newF1;
	std::cout << str1 << "\t" << str1.length() << std::endl;

	char buf[str.length()];
	for (int i = 0; i < 256; i++) {
		if (i >= str.length())
			continue;
		else
			buf[i] = str[i];
	}

	std::cout << "Count char: " << buf << std::endl;*/



	






	//char buf[255];
	//char* buf = strdup(str);
	//strcpy(buf, str.c_str()); // From string to char

	//char buf1[255];
	//char* buf1 = strdup(str1);
	//strcpy(buf, str1.c_str());
		
	if (oldF != newF) {
		

		//char oldfilename[50] = "123456";                   // old name file
		//char newfilename[50] = "888";
		if (rename(oldF, newF) == 0)
			//if (rename(str, str2) == 0)
			std::cout << "Folder renamed!" << std::endl;
		else
			std::cout << "Folder not renamed1." << std::endl;
	}
	else
		std::cout << "Folder not renamed" << std::endl;
}

//Remove folder
void removeFolder(char oldF[], char newF[]) {
	if (oldF = newF) {
		MoveFileA(oldF, newF);
		if (MoveFileA(oldF, newF) == 0)
			std::cout << "Folder removed." << std::endl;
		else
			std::cout << "Folder not removed." << std::endl;

	}
	else
		std::cout << "Folder not removed";

}