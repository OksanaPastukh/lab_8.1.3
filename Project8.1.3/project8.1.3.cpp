//Дано літерний рядок, який містить послідовність символів s0, …, sn, ….Відомо, що
//серед цих символів є по крайній мірі три крапки.
//1. Знайти число і таке, що sі – третя за порядком крапка.
//2. Замінити кожний четвертий символ крапкою.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int find_index(char* s)
{
	int count = 0,
		pos = -1;
	char* t;
	while (t = strchr(s + pos + 1, '.'))
	{
		pos = t - s;
		count++;
		if (count == 3)
			return pos;
	}
	return 0;
}

/*void replace_every_fourth(char* s)
{
	for (int pos = 3; s[pos] != 0; pos++)
	{
		if ((pos + 1) % 4 == 0)
		{
			//strncpy_s(s + pos, sizeof(s), ".", 1);
		}
	}
}*/

int main()
{
	char s[101];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	cout << "String contained " << find_index(s) << "'.'" << endl;
	/*replace_every_fourth(s);
	cout << "Modified string  : " << s << endl;*/
	return 0;
}