

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include <cstdio>

#include <string.h>


struct ANI{                                //              аняме
char name[100];
char author[100];
int parts;
int series;
int anime;
};





using namespace std;




void read(char* fin){

  bool needSave;
  bool nmenu;


	 FILE *file;

	int lineCount = 0;



	file = fopen(fin, "r");
	if (file == NULL) {
	cout << "Ошибка чтения" << endl; Sleep(1000);

	}


	char buffer[256];
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		lineCount++;
	}



	ANI* cp = (ANI*)malloc(lineCount*sizeof(struct ANI));
	if (cp == NULL) {
		cout << "Ошибка выделения памяти" << endl; Sleep(1000);
		fclose(file);
	}


	 rewind(file); //Возвращаем указатель в начало файла


	// Читаем данные в массив структур
	for (int i = 0; i < lineCount; i++) {

	fscanf(file, "%*[\n]%[^,], %[^,], %d, %d, %d", cp[i].name,cp[i].author,&cp[i].parts,&cp[i].series ,&cp[i].anime);

	}

	fclose(file); // Закрываем файл




		 while(true){
		 while(true){



					int x = 0;
					int e = 0;



	   //	 int maxLength = 0;

				  // Поиск максимальной длины имени
	for (int i = 0; i < lineCount; i++) {
		int length = (int)strlen(cp[i].name); // Получаем длину имени

		if (length > x) {
			x = length; // Обновляем максимальную длину

		}
	}

		   for (int i = 0; i < lineCount; i++) {
		int length1 = (int)strlen(cp[i].author); // Получаем длину имени

		if (length1 > e) {
			e = length1; // Обновляем максимальную длину

		}
	}



			// cout <<"max symbols author:"<< e << endl;;
		   //	cout <<"max symbols name:"<< x << endl;;

		// Sleep(7000);

		  system("cls");

		   cout << "+---+";

		   for(int s = 0;s < x+2; s++){

		   cout << "-";
		   }

		   cout << "+";

		   for(int g = 0;g < e+2; g++){

		   cout << "-";
		   }
		  cout << "+";

		  cout << "-----------------+-----------------+-------------+" << endl;

		  cout << "|№  | Название";

		   for(int j = 0;j < x-7; j++){

		   cout << " ";
		   }
		   cout <<"| Автор";

			for(int k = 0;k < e-4; k++){

		   cout << " ";
		   }

		   cout << "| Кол-во сезонов  | Кол-во серий    | Год выпуска |" << endl;



		  cout << "+---+";

		   for(int b = 0;b < x+2; b++){

		   cout << "-";
		   }

		   cout << "+";

		   for(int c = 0;c < e+2; c++){

		   cout << "-";
		   }
		  cout << "+";

		  cout << "-----------------+-----------------+-------------+" << endl;












			  // cout << "+---+--------------------------------+--------------------------------+-----------------+-----------------+-------------+" << endl;
			 //  cout << "|№  | Название                       | Автор                          | Кол-во сезонов  | Кол-во серий    | Год выпуска |" << endl;
			 //  cout << "+---+--------------------------------+--------------------------------+-----------------+-----------------+-------------+" << endl;



				for (int i = 0; i < lineCount; i++) {
				cout << "|"  << setw(2) << left << i+1  << " | "
				 << setw(x) << left << cp[i].name << " | "
				 << setw(e) << left << cp[i].author << " | "
				 << setw(15) << left << cp[i].parts << " | "
				 << setw(15) << left << cp[i].series << " | "
				 << setw(11) << left << cp[i].anime << " | "
				 << endl;
				}





                 cout << "+---+";

		   for(int d = 0;d < x+2; d++){

		   cout << "-";
		   }

		   cout << "+";

		   for(int z = 0;z < e+2; z++){

		   cout << "-";
		   }
		  cout << "+";

		  cout << "-----------------+-----------------+-------------+" << endl;












			  //	cout << "+---+--------------------------------+--------------------------------+-----------------+-----------------+-------------+" << endl;











					cout << "1 - Редактировать строку" << endl;
					cout << "2 - Добавить строку" << endl;
					cout << "3 - Удалить строку" << endl;
					cout << "4 - Записать в файл" << endl;
					cout << "5 - Сортировка" << endl;
					cout << "6 - Выход в меню" << endl;

					cout << "--------------------------------" << endl;
					char mec;
					cin >> mec;

				if(mec == '1'){


	 int editIndex;
	 cout << "Введите номер строки для редактирования: ";
	 cin >> editIndex;

	cin.ignore();

	if (editIndex > 0 && editIndex <= lineCount) {
	char rp;
			//редактируем
		editIndex--; // Индексы массива начинаются с 0
	cout << "--------------------------------" << endl;
	cout << "Где будем редактировать?" << endl;
	cout << "1 - Название" << endl;
	cout << "2 - Автор" << endl;
	cout << "3 - Кол-во сезонов" << endl;
	cout << "4 - Кол-во серий" << endl;
	cout << "5 - Дата выхода" << endl;
	cout << "--------------------------------" << endl;
	cin >> rp;


		if(rp == '1'){
		 cout << "Название: ";
		 cin.getline(cp[editIndex].name, 100);
		} else if(rp == '2'){


		 cout << "Автор этой хуйни: ";
		  cin.getline(cp[editIndex].author, 100);


		} else if(rp == '3'){
		  cout << "" << endl;
		cout << "Кол-во серий:" << endl;

		int ich;
		cin >> ich;
		 cp[editIndex].parts = ich;

		cout << "" << endl;


		} else if (rp == '4'){
		 int och;
		 cout << "Кол-во сезонов: ";
		 cin >> och;
		 cp[editIndex].series = och;

		 }else if (rp == '5'){
		 int ra;
		 cout << "Год выхода: ";
		 cin >> ra;
		 cp[editIndex].anime = ra;

		 }



		  else{
		  cout << "Ошибка!" << endl; Sleep(1000);
		}



	} else {
		cout << "Некорректный номер строки." << endl;


           	cin.clear();
			cin.ignore();

			cout << "Нажмите Enter для продолжения" << endl;
			cin.get();

	}


				}else if(mec == '2'){


				   ANI newData;


						// +1 к массиву
					lineCount++;
					cp = (ANI*)realloc(cp, lineCount * sizeof(ANI));

					// и добавляем эту структуру в конец массива




		cout << "Название: ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // чистим буфер
		cin.getline(cp[lineCount - 1].name, 50);
		cout << "" << endl;


		cout << "Автор: ";
		cin.getline(cp[lineCount - 1].author, 50);


		cout << "" << endl;
		cout << "Кол-во сезонов:" << endl;
		int sesco;
		cin >> sesco;
		cp[lineCount - 1].parts = sesco;
		cout << "" << endl;


		cout << "Кол-во серий: ";
		int parco;
		cin >> parco;
		cp[lineCount - 1].series = parco;


		cout << "" << endl;
		cout << "Дата выхода: ";
		int daat;
		cin >> daat;
		cp[lineCount - 1].anime = daat;






				}else if(mec == '3'){
				int deleteIndex;

				cout << "Введите номер строки для удаления: ";

				cin >> deleteIndex;


				if (deleteIndex > 0 && deleteIndex <= lineCount) {

				// удаление строки
				deleteIndex--; // !индексы массива начинаются с 0!

				for (int i = deleteIndex; i < lineCount - 1; i++) {
				cp[i] = cp[i + 1];
				}

				lineCount--;
				cout << "Строка удалена." << endl;
				Sleep(750);

				} else {
				cout << "Некорректный номер строки." << endl;
				Sleep(750);
				 }

				}else if(mec == '4'){


		   char full[10];
		   char filenameInput[50];
			char fullFilename[50];

			cout << "Введите название файла для сохранения данных: ";
			cin >>  full;


			strcat(full, ".txt"); // добавляем .txt


			ofstream outfile(full);
			if (outfile.is_open()) {
				for (int i = 0; i < lineCount; i++) {
					outfile << cp[i].name << ","
							<< cp[i].author << ","
							<< cp[i].parts << ","
							<< cp[i].series << ","
							<< cp[i].anime << endl;
				}
				outfile.close();
				cout << "Данные записаны в файл '" << full << "'." << endl;
				nmenu = true;


				free(cp);




				Sleep(750);

					cin.clear();
					cin.ignore();

					cout << "Нажмите Enter для продолжения" << endl;
					cin.get();
				return;

			} else {

				cout << "Ошибка открытия файла." << endl;
				Sleep(750);

				   }


			needSave = true;


				}else if(mec == '9'){

				}else if(mec == '5'){

				int so;

		cout << "-----------------------------------------" << endl;
		cout << "По возрастанию или убыванию?             " << endl;
		cout << "-----------------------------------------" << endl;
		cout << "1 - По возрастанию" << endl;
		cout << "2 - По убыванию" << endl;
		cout << "----------------------------------------" << endl;

		cin >> so;

		if(so == 1){
		 //сортировка
			 for (int i = 0; i < lineCount; i++){

		  for (int j = 0; j < lineCount; j++){
		  if (cp[i].anime  < cp[j].anime)
		   {

		   ANI t = cp[j];
		   cp[j] = cp[i];
		   cp[i] = t;
		   }
		  }
		  }






		 
		}else if(so == 2){

			 for (int i = 0; i < lineCount; i++){
		  for (int j = 0; j < lineCount; j++){
		  if (cp[i].anime  > cp[j].anime)
		   {
			 ANI t = cp[j];
		   cp[j] = cp[i];
			cp[i] = t;
		   }
		  }
		  }
		 }else{
			 cout <<"no"<<endl;
			 Sleep(1000);

         }

				}else if(mec == '6'){

                	if(needSave == false){

		 cout << "----------------------------------------------------------" << endl;
		 cout << "Данные не сохранены. Может, стоит их сохранить?" << endl;
		 cout << "1 - Да, надо сохранить" << endl;
		 cout << "2 - Нет, давай в меню" << endl;
		 cout << "----------------------------------------------------------" << endl;
		 char nmc;
		 cin >> nmc;
		 cout << "----------------------------------------------------------" << endl;

		 if (nmc == '1') {

		 }else{

		 free(cp); //исправление

		  cout << "Катапультируемся в меню" << endl;
		  cout << "----------------------------------------------------------" << endl;
		  nmenu = true;
		  Sleep(1000);
		  return;
		  }
			}


				}else{
					cout << "Ошибка" << endl;  Sleep(1500);
                }













		 }
		 }




	 }








