#pragma once
#include <iostream>
#include <windows.h>
#include <string>




//Create the folder
void createFolder(std::string& str); 

//Delete the folder
void deleteFolder(std::string& str);

//Rename the folder 
void renameFolder(std::string& a);


//Remove folder
void removeFolder(char oldF[], char newF[]);
