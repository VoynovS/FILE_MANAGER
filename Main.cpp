#include <iostream>
#include <windows.h>
#include <string>
#include "Folder.h"
using namespace std;



int main() {
	//C:\\TESTER\\123"

	LPCSTR pcstr;
	string folder = "";
	pcstr = folder.c_str();


	/*getline(cin, folder);
	createF(folder);
	getline(cin, folder);
	createF(folder);
	getline(cin, folder);
	deleteF(folder);*/

	//������� ���� � �����
	char oldF[256];
	cin >> oldF;
	//������� �������� �����
	char oldF1[256];
	cin >> oldF1;
	//������� ���� � �����
	char newF[256];
	cin >> newF;
	//������� ����� �������� �����
	char newF1[256];
	cin >> newF1;

	renameFolder(oldF, newF, oldF1, newF1);

	/*char oldF1[50];
	cin >> oldF1;
	char newF1[50];
	cin >> newF1;

	removeF(oldF1, newF1); */

	//CreateDirectoryA(folder.c_str(), NULL);




	return 0;
}
