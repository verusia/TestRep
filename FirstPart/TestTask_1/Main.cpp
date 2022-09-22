#include "iostream"
#include <algorithm>

using namespace std;

void main()
{
	string str;
	string str1;

	int count=0;

	cin >> str;

	std::transform(str.begin(), str.end(), str.begin(), toupper);

	for(int z=0;z<str.length();z++)
	{ 
		str1 = str[z];
		for(int i=0;i<str.length();i++)
		{ 	
			if (str.substr(i, str1.length()) == str1)
				++count;
		}
		if (count > 1)
			std::replace(str.begin(), str.end(), str1[0], ')');
		else
			std::replace(str.begin(), str.end(), str1[0], '(');
		count = 0;
	}
	cout << endl<<str;
}