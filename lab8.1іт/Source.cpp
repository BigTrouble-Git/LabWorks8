
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool Include(const char* s, const char c)
{
	for (int i = 0; s[i] != '\0'; i++)
		if (c == s[i] && c == s[i + 1] && c == s[i + 2])
			return true;
	return false;
}
char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 3)
		return str;
	char* tmp = new char[len + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
	while (i < len && str[i + 2] != 0)
	{
		if (str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*')
		{
			strcat_s(t, len + 1, "!!");
			t += 2; 
			i += 3;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy_s(str,len + 1, tmp);
	return tmp;
}
int main()
{
	char str[101];
	char c = '*';
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char* dest = new char[151];
	cout << endl; 
	if (Include(str, c))
		cout << "String has 3 * in a row" << endl;
	else
		cout << "String hasn`t 3 * in a row" << endl;
	cout << endl;
	dest = Change(str);
	
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;

	}
	