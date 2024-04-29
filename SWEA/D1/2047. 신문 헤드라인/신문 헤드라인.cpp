#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) >= 97 && s.at(i) <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	cout << s << " " << "\n";

	return 0;
}