#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a != b && b != c && a != c)
	{
		int max;
		// a > b
		if (a > b)
		{
			// c > a > b
			if (c > a)
			{
				max = c;

			}
			// a > (b,c)
			else
			{
				max = a;
			}
		}
		// b > a
		else
		{
			// c > b > a
			if (c > b)
			{
				max = c;
			}
			// b > (a,c)
			else
			{
				max = b;
			}
		}
		cout << max * 100;
	}
	// 최소 두개 눈금이 같은 경우
	else
	{
		// 눈금 3개 같은 경우
		if (a == b && a == c)
		{
			cout << 10000 + a * 1000;
		}
		else
		{
			//a가 b 와 c가 같은 경우, 같은 눈금이 2개
			if (a == b || a == c)
			{
				cout << 1000 + a * 100;
			}
			//b와 c가 같음, 같은 눈금이 2개 
			else
			{
				cout << 1000 + b * 100;
			}
		}
	}
}