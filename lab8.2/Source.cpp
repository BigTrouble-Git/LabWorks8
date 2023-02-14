//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* Delete(char* str, const char* cs)
{
	char* d = new char[strlen(str) + 1];
	char* t = d;
	size_t len = strlen(str);
	bool b; size_t k = len;
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ') { k = i; break; }

	for (int i = 0; i < k; i++)
	{
		b = true;
		for (int j = 0; cs[j] != '\0'; j++)
			if (str[i] == cs[j])
				b = false;
		if (b)
			*t++ = str[i];  
	}

	for (int i = k; i < len; i++)
		*t++ = str[i];
	*t = '\0';
	strcpy_s(str, len + 1, d);
	return d;
}

int main()
{
	char str[100];
	cin.getline(str, 100);
	char cs[] = "1234567890?><,./!'_}{;:!@#$%^\&*()";
	cout << Delete(str, cs) << endl;
	return 0;
}