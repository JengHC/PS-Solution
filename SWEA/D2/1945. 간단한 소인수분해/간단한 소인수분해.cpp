#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		int e = 0;

		int n = 0;
		cin >> n;
		while (n != 1)
		{
			if (n % 2 == 0)
			{
				a++;
				n /= 2;
			}
			if (n % 3 == 0)
			{
				b++;
				n /= 3;

			}
			if (n % 5 == 0)
			{
				c++;
				n /= 5;
			}
			if (n % 7 == 0)
			{
				d++;
				n /= 7;
			}
			if (n % 11 == 0)
			{
				e++;
				n /= 11;
			}
		}
		cout << "#" << test_case << " " << a <<" " << b << " " << c << " " << d << " " <<  e << " " << endl;

	}

    return 0;
}
