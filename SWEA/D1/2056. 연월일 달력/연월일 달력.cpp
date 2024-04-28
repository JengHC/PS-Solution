#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> dayofmonth = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int test_case;
	int T;

	cin >> T;
	string s;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> s;
		int month = atoi(s.substr(4, 2).c_str());
		int day = atoi(s.substr(6).c_str());
		cout << "#" << test_case << " ";

		if (1<=month && month <=12 && 1<=day && day <= dayofmonth[month-1])
		{
			cout << s.substr(0, 4) << "/" << s.substr(4,2) << "/" << s.substr(6) << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}