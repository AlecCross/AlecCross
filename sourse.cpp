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
	//�������� ����� ����� �������, ����� ������ ����������� ���������� � ������� �����
	{
		cout << "���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++\n";
		char mas[256] = "";
		cout << "�������  �����y" << endl;
		cin.ignore();
		gets_s(mas);
		
		
		
		char podmena = 0;//��� �������� ����� �� �������
		char mas2[256] = "";
		for (int i = 0; i < strlen(mas); i++)
		{
			//������ ����� ������� �������
			if (i == 0)
			{
				podmena = int(mas[i]);
				mas2[i] = char(podmena - 32);
				i++;
			}
			//���� ����������� �����, ������������ �� ������� � ��������� ����� 
			if (int(mas[i])==46)
			{
				mas2[i] = mas[i];
				// "�������� �� ������ �������� �� ������� ��������" �������� �� �������   <?>
				if (int(mas[i]) > 96 && int(mas[i]) < 123)
				{
					podmena = int(mas[i]);
					mas2[i] = char(podmena - 32);
					i++;
				}
			}
			//����� ������ ������������
			else
			{
				mas2[i] = mas[i];
			}
		}
		cout << mas2;
	
	}
	break;
	case 3:
	//���������� ������� ��� ������ ����� ����������� � ������
	{
		char mas[256] = "���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++";
		/*�������� �������� �� ������ ������, ����� ������ ���������� ������� ����� ������� ���-�� ���������� � ������ ���� �����, 
		���� ����������� ������ �����, ������ ������ ����������... ����� ������ ��� ��������� ����������*/
	}
	break;
	case 4:
	// ���������� ������� ��� ����� ����������� � ������
	{

		cout << "���� ��������� �����. ��������� ����������� ��������� ������� �� ���������� ����� C++\n";
		char mas[256] = "";
		cout << "�������  �����y" << endl;
		cin.ignore();
		gets_s(mas);
		int c = 0;
		
		for (int i = 0; i < 256; i++)
		{
			if (int(mas[i]) >= 48 && int(mas[i]) <= 57) //����� ����� � char
			{
				c++;
			}
		}
		cout <<"���-�� ���� " << c << endl;
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