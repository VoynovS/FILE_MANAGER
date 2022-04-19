#pragma once
#include <iostream>
#include <windows.h>
#include <string>

//Create the folder
void createF(std::string& str); 

//Delete the folder
void deleteF(std::string& str);

//Rename the folder 
void renameFolder(char oldF[], char newF[]);


//Remove folder
void removeFolder(char oldF[], char newF[]);
