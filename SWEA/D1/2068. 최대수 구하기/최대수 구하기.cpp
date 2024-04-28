#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int max = 0; // max변수를 0으로 초기화 
		for (int i = 0; i < 10; i++)
		{
			int num;
			cin >>num;

			if (num > max) //max변수보다 큰 값이 있으면, 그 값이 제일큼
			{
				max = num;
			}
		}
		cout << "#" << test_case << " " << max << '\n';
	}
	return 0;
}
