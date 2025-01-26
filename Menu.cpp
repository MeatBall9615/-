

#include <iostream>
#include <windows.h>

#include <Edit.h>
#include <Fileworker.h>

using namespace std;



int main()
{



system("chcp 1251");
system("color F0");
system("cls");//чистим экран

bool gflag = false;

 while(true){

  while (true){

  system("cls");//чистим экран

  cout << "Выберите действие:" << endl;    //выбор действия
  cout << "1 - Открыть файл" << endl;
  cout << "2 - Создать файл" << endl;
  cout << "3 - Удалить файл" << endl;
  cout << "0 - Выход из программы" << endl;

  int mn;
  cin >> mn;


   switch(mn){     // выбор действия

 case 0: cout << "Ну ты это , заходи если что " << endl; gflag = true; Sleep(1500); break;

   case 1: open(); break;

   case 2: create(); break;

   case 3: Delete(); break;

   default: cout << "Я нахожу ваши умственные способности крайне выдающимися , если вы не в состоянии выбрать цифру от 0 до 3" << endl; Sleep(1500);  break;

   }
   if(gflag == true){
   break;
   }
  }
  if(gflag == true){
   break;
   }
 }
  return 52;
}
