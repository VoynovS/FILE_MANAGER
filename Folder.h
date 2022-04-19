#pragma once
#include <iostream>
#include <windows.h>
#include <string>

//Create the folder
void createF(std::string& str); 

//Delete the folder
void deleteF(std::string& str);

//Rename the folder 
void renameFolder(char oldF[], char newF[], char oldF1[], char newF1[]);


//Remove folder
void removeF(char oldF[], char newF[]);
