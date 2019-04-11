#include <iostream>
#include <stdlib.h>
using namespace std;

/*Есть некоторый текст. Используя стандартные строковые функции из
библиотеки языка C++
? Найдите и замените вхождение некоторого слова на заданное
пользователем слово
? Изменить текст таким образом, чтобы каждое предложение
начиналось с большой буквы
? Посчитайте сколько раз каждая буква встречается в тексте
? Посчитайте сколько раз цифры встречаются в тексте*/
//char *func_1( char mas);

int main()
{
	setlocale(0, "rus");

	cout << "Введите номер задания, для выхода нажминие 5" << endl;
	int numbeEx;
	cin >> numbeEx;


	switch (numbeEx)
	{
	case 1:
	{
		//Найдите и замените вхождение некоторого слова на заданное пользователем слово
		cout << "Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++\n";
		char mas[256] = "";
		cout << "Введите  строкy" << endl;
		cin.ignore();
		gets_s(mas);
		cout << "Введите слово из представленной строки" << endl;
		char word1[256] = "";
		gets_s(word1);
		cout << "Напишите что-то на что вы хотите заменить это слово" << endl;
		char word2[256] = "";
		gets_s(word2);
		char mas2[256] = "";

		cout << strstr(mas, word1);

		char *vxogd_slova_vstroky = strstr(mas, word1);
		int intdex_vxogd_slova_vstroky;
		for (int i = 0; i < strlen(mas); i++)
		{
			if (mas[i] == vxogd_slova_vstroky[0]) intdex_vxogd_slova_vstroky = i;
		}

		cout << endl << intdex_vxogd_slova_vstroky;

		//запись часть первой строки во вторую до слова на замену
		int i = 0;
		for (; i < intdex_vxogd_slova_vstroky; i++)
		{
			mas2[i] = mas[i];
		}
		mas2[i] = '\0';
		//	strcat_s(mas2, " ");
		strcat_s(mas2, word2);
		int index_new_mas = strlen(mas2);
		cout << endl << mas2 << endl;
		int j = intdex_vxogd_slova_vstroky + strlen(word1);
		int k;
		for (k = index_new_mas; j < strlen(mas); k++, j++)
		{
			mas2[k] = mas[j];
		}
		mas2[k] = '\0';
		cout << endl << mas2 << endl;
		//Записать word2 во вторую строку
		/*int j = 0;
		for (int i = strcspn(word1, word2); j < strlen(word2); i++)
		{
			mas2[i] = word2[j];
		}
		//Дописать во вторую строку остальное после слова
		for (int i = strcspn(word1, word2)+ strlen(word2); j < 256; i++)
		{
			mas2[i] = mas[i];
		}*/

	}
	break;
	case 2:
		//Изменить текст таким образом, чтобы каждое предложение начиналось с Большой буквы
	{
		cout << "Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++\n";
		char mas[256] = "";
		cout << "Введите  строкy" << endl;
		cin.ignore();
		gets_s(mas);
		//используем функции islower  является ли он строчным символом
		//и tolower  для преобразования строчных букв в прописные после точки
		
		bool upperReq = true;

		for (int i = 0; i < strlen(mas); i++)
		{

			if (upperReq && isupper(mas[i]) || islower[i]) {
				
				toupper(mas[i]);
				upperReq = false;
			}

			if (mas[i] == '.'){
				upperReq = true;
			}
		}
		cout << mas << endl;
	}
	break;
	case 3:
		//Посчитайте сколько раз каждая буква встречается в тексте
	{
		char mas[256] = "Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++";
		/*Проверяю является ли символ буквой, тогда создаю переменную которая будет считать кол-во повторений в строке этой буквы,
		если встречается другая буква, создаю другую переменную... после вывожу все созданные переменные*/
		cout << "Введите  строкy" << endl;
		cin.ignore();
		gets_s(mas);
		int temp;

		int arCode[26]{};
		int arCounter[26]{};

		//Заполнение массива arCode номерами кодов букв от 97 до 122
		for (int i = 0; i <= 26; i++)
		{
			if (i == 0)
			{
				arCode[i] = 97;
			}
			else
			{
				arCode[i] += 97 + i;
			}
		}
		cout << "Вот каке буквы встретились в том что вы написали:" << endl << endl;
		
		//Основные операции по подсчету кол-ва повторений каждой буквы
		for (int i = 0; i < 26; i++)
		{
			temp = arCode[i];
			for (int j = 0; j < strlen(mas); j++)
			{
				if (temp == int(mas[j]))
				{
					//Увеличить массив счетчик по индексу соответствующему индексу кода
					arCounter[i]++;
				}
				else
				{
				
				}
			}
			if (arCounter[i] != 0)
			{
				cout <<char(arCode[i])<<"-"<<arCounter[i]<<" раза"<<endl;
			}
		}
		cout << strlen(mas);
	}
	break;

	case 4:
		// Посчитайте сколько раз цифры встречаются в тексте
	{
		cout << "Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++\n";
		char mas[256] = "";
		cout << "Введите  строкy" << endl;
		cin.ignore();
		gets_s(mas);
		int c = 0;

		for (int i = 0; i < 256; i++)
		{
			if (int(mas[i]) >= 48 && int(mas[i]) <= 57) //лучше цифры в char
			{
				c++;
			}
		}
		cout << "кол-во цифр " << c << endl;
	}
	break;
	case 5:
	{
		"Доооооо-свиданья!"; }
	break;
	default:
	{cout << "Неверный ввод" << endl;
	break; }

	}
system("pause");
}