#include <iostream>
#include <stdlib.h>
using namespace std;

/*���� ��������� �����. ��������� ����������� ��������� ������� ��
���������� ����� C++
? ������� � �������� ��������� ���������� ����� �� ��������
������������� �����
? �������� ����� ����� �������, ����� ������ �����������
���������� � ������� �����
? ���������� ������� ��� ������ ����� ����������� � ������
? ���������� ������� ��� ����� ����������� � ������*/

//char *func_1( char mas);

int main()
{
	setlocale(0, "rus");
	 	
	cout << "������� ����� �������, ��� ������ �������� 5" << endl;
	int numbeEx;
	cin >> numbeEx;
	switch (numbeEx)
	{
	case 1:
	{ 
		//������� � �������� ��������� ���������� ����� �� �������� ������������� �����
		cout<<"���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++\n";
		char mas[256] = "";
		cout << "�������  �����y" << endl;
		cin.ignore();
		gets_s(mas);
		cout << "������� ����� �� �������������� ������" << endl;
		char word1[256] = "";
		gets_s(word1);
		cout << "�������� ���-�� �� ��� �� ������ �������� ��� �����" << endl;
		char word2[256] = "";
		gets_s(word2);
		 
		/*����� ������� ��� ���������� � ������ 1 ��������� ������ 2\
		strstr(s1, s2)
		�������� ��� ����� ������ ������ ����� � ������ �� ����� �����
		strspn(s1,s2); strcspn(s1,s2)
		������ ����� ��������� ������ 1 
		strtok(s1, s2)		

		����� ���������� ������ 1 �� 2�
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

		//������ ����� ������ ������ �� ������ �� ����� �� ������
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
		//�������� word2 �� ������ ������
		/*int j = 0;
		for (int i = strcspn(word1, word2); j < strlen(word2); i++)
		{
			mas2[i] = word2[j];
		}
		//�������� �� ������ ������ ��������� ����� �����
		for (int i = strcspn(word1, word2)+ strlen(word2); j < 256; i++)
		{
			mas2[i] = mas[i];
		}*/

		
	}
	break;
	case 2:
	//�������� ����� ����� �������, ����� ������ �����������
	{
		char mas[256] = "���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++";
		
	}
	break;
	case 3:
	//���������� ������� ��� ������ ����� ����������� � ������
	{
		char mas[256] = "���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++";
		
	}
	break;
	case 4:
	// ���������� ������� ��� ����� ����������� � ������
	{
		char mas[256] = "1 ���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++";
		for (int i = 0; i < 256; i++)
		{

		}
	}
	break;
	case 5:
	{
		"�������-��������!"; }
		break;
	default:
	{cout << "�������� ����" << endl;
	break; }

	}
	system("pause");
}
