#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
using namespace std;
void inputString(string &, int &);
string encoding(string, int);
int main()
{
	srand(time(NULL));
	int key;
	char c;
	string input, output;
	do
	{
		cout << "<-------------------------------------------------->" << endl;
		cout << "\t\t\tChon 1 trong cac chuc nang" << endl;
		cout << "1. Nhap moi mot chuoi" << endl;
		cout << "2. Xuat chuoi da duoc ma hoa" << endl;
		cout << "3. Xoa man hinh" << endl;
		cout << "4. Thoat chuong trinh" << endl;
		cout << "Nhap 1 ky tu: "; cin >> c; cin.ignore();
		if (int(c) - 48 < 1 || int(c) - 48 > 4) cout << "Nhap sai, chi nhap tu 1->4." << endl;
		switch (c)
		{
		case '1':
			inputString(input, key);
			output = encoding(input, key);
			break;
		case '2':
			cout << output << endl;
			break;
		case '3':
			system("cls");
			break;
		case '4':
			system("pause");
			return 0;
		}
	} while (c != '4');
	system("pause");
	return 0;
}
void inputString(string &input, int &key)
{
	char c;
	do
	{
		cout << "Nhap 1 de nhap key, 2 de random key" << endl;
		cin >> c; cin.ignore();
		if (c == '1')
		{
			do
			{
				cout << "Nhap key(1->25): "; cin >> key; cin.ignore();
				if (key<1 || key>25) cout << "Nhap sai, key nam trong khoang 1->25." << endl;
			} while (key < 1 || key>25);
		}
		else if (c == '2') { key = rand() % 25 + 1; cout << "key: " << key << endl; }
		else cout << "Nhap sai, chi duoc nhap 1 hoac 2." << endl;
	} while (c != '1'&&c != '2');
	cout << "Nhap chuoi can ma hoa: "; getline(cin, input);
}
string encoding(string input, int key)
{
	string output;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'a'&&input[i] <= 'z')
		{
			output += char(input[i] + key);
			if (output[i] > 'z') output[i] = char(output[i] - 26);
		}
		else if (input[i] >= 'A'&&input[i] <= 'Z')
		{
			output += char(input[i] + key);
			if (output[i] > 'Z') output[i] = char(output[i] - 26);
		}
		else output += input[i];
	}
	return output;
}
