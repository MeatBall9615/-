#include <iostream>
#include <windows.h>
#include <fstream>
#include <cstdio>
#include <sstream>

using namespace std;


char filename[50];
char text[] = ".txt";


char* ourchar;

bool WriteFlag;
bool NeedWrite;



void create();
void Delete();
void open();





void create(){
	FILE* tst;

 cout << "������� ��� �����: " << endl;
	cin >> filename;

   strcat(filename, ".txt"); // ��������� ���������� �����

	 //tst = fopen(filename, "r");
	tst = fopen(filename, "r");

	if (tst != NULL) {
		cout << "���� � ����� ��������� ��� ����������!" << endl;
		Sleep(1000);
		fclose(tst);
		return;
	}

	fclose(tst);



	ofstream File(filename);

	File.close();

	cout << "���� ������! ��������� ����� Debug." << endl;
	Sleep(1000);
}



void Delete(){
char name[256];
  cout << "������� ��� �����: " << endl;
  cin >> name;

  strcat(name, ".txt");  // ��������� ���������� .txt

  if (remove(name) != 0) { // �������� �����
	cout << "������ �������� �����" << endl;
  } else {
	cout << "���� ������� ������" << endl;
  }

  Sleep(1000);
}





void open(){

cout << "" << endl;
cout << "������� �������� ����� ��� �������(.txt)" << endl;
cout << "------------------------------------------" << endl;


cin >> filename; // ������ �������� �����
cout << "------------------------------------------" << endl;

strcat(filename, text); // ��������� ����� � �������� �����

	read(filename);

	 Sleep(1000);

}

