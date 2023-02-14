#include <iostream>
#include <string>
using namespace std;

bool Include(const string s)
{
	size_t pos = 0;
	while ((pos = s.find('*', pos)) != -1)
		if (s[pos + 1] == '*' && (s[pos + 2] == '*')) {
			return true;
		}
		else

			return false;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('*', pos)) != -1)
		if (s[pos + 1] == '*') {
			if (s[pos + 2] == '*') {
				s.replace(pos, 3, "!!");
			}

		}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << endl;
	if (Include(str))
		cout << "String has 3 * in a row" << endl;
	else
		cout << "String hasn`t 3 * in a row" << endl;
	string dest = Change(str);
	

	cout << endl;
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}