

#include <iostream>
#include <windows.h>

#include <Edit.h>
#include <Fileworker.h>

using namespace std;



int main()
{



system("chcp 1251");
system("color F0");
system("cls");//������ �����

bool gflag = false;

 while(true){

  while (true){

  system("cls");//������ �����

  cout << "�������� ��������:" << endl;    //����� ��������
  cout << "1 - ������� ����" << endl;
  cout << "2 - ������� ����" << endl;
  cout << "3 - ������� ����" << endl;
  cout << "0 - ����� �� ���������" << endl;

  int mn;
  cin >> mn;


   switch(mn){     // ����� ��������

 case 0: cout << "�� �� ��� , ������ ���� ��� " << endl; gflag = true; Sleep(1500); break;

   case 1: open(); break;

   case 2: create(); break;

   case 3: Delete(); break;

   default: cout << "� ������ ���� ���������� ����������� ������ ����������� , ���� �� �� � ��������� ������� ����� �� 0 �� 3" << endl; Sleep(1500);  break;

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
