//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool Include(const char* str, const char c)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (c == str[i] && c == str[i + 1] && c == str[i + 2])
			return true;
	return false;
}

char* Change(char* str)
{
	char* t = new char[strlen(str)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(str + pos1, '*'))
	{
		if (str[p - str + 1] == '*') {
			if (str[p - str + 2] == '*') {
				{
					pos2 = p - str + 3;
					strncat_s(t, 30,  str + pos1, pos2 - pos1 - 3);
					strcat_s(t,30, "!!");
					pos1 = pos2;
				}
			}
		}
		
	}
	strcat_s(t, 30,  str + pos1);
	strcpy_s(str, 30, t);
	return t;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 101);
	
	char c = '*';
	if (Include(str, c))
		cout << "yes" << endl;
	else
		cout << "no" << endl;


	char* dest = new char[151];
	
		dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}