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
		cout<<"Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++\n";
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
		 
		/*Нужна функция для нахождения в строке 1 вхождение строки 2\
		strstr(s1, s2)
		наверное еще нужно узнать размер слова и размер до этого слова
		strspn(s1,s2); strcspn(s1,s2)
		теперь нужно разделить строку 1 
		strtok(s1, s2)		

		нужно объединить строку 1 со 2й
		strcat(dest, scr, maxlen)


		strcspn strncpy*/
		

		char mas2[256] = "";


		cout<< strstr(mas, word1);

		char *vxogd_slova_vstroky = strstr(mas, word1);
		int intdex_vxogd_slova_vstroky;
		for (int i = 0; i < strlen(mas); i++)
		{
			if (mas[i] == vxogd_slova_vstroky[0]) intdex_vxogd_slova_vstroky = i;
		}

		cout <<endl<< intdex_vxogd_slova_vstroky;

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
		cout <<endl<< mas2<<endl;
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
	//Изменить текст таким образом, чтобы каждое предложение
	{
		char mas[256] = "Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++";
		
	}
	break;
	case 3:
	//Посчитайте сколько раз каждая буква встречается в тексте
	{
		char mas[256] = "Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++";
		
	}
	break;
	case 4:
	// Посчитайте сколько раз цифры встречаются в тексте
	{
		char mas[256] = "1 Есть некоторый текст. Используя стандартные строковые функции из библиотеки языка C++";
		for (int i = 0; i < 256; i++)
		{

		}
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
