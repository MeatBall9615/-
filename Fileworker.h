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

 cout << "Введите имя файла: " << endl;
	cin >> filename;

   strcat(filename, ".txt"); // Добавляем расширение файла

	 //tst = fopen(filename, "r");
	tst = fopen(filename, "r");

	if (tst != NULL) {
		cout << "Файл с таким названием уже существует!" << endl;
		Sleep(1000);
		fclose(tst);
		return;
	}

	fclose(tst);



	ofstream File(filename);

	File.close();

	cout << "Файл создан! Проверьте папку Debug." << endl;
	Sleep(1000);
}



void Delete(){
char name[256];
  cout << "Введите имя файла: " << endl;
  cin >> name;

  strcat(name, ".txt");  // Добавляем расширение .txt

  if (remove(name) != 0) { // Удаление файла
	cout << "Ошибка удаления файла" << endl;
  } else {
	cout << "Файл успешно удален" << endl;
  }

  Sleep(1000);
}





void open(){

cout << "" << endl;
cout << "Введите название файла без формата(.txt)" << endl;
cout << "------------------------------------------" << endl;


cin >> filename; // вводим название файла
cout << "------------------------------------------" << endl;

strcat(filename, text); // Добавляем текст к названию файла

	read(filename);

	 Sleep(1000);

}

