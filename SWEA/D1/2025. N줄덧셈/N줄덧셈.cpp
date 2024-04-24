#include <iostream>
using namespace std;

int main()
{
	// 1부터 n까지 숫자를 모두 더하시오

	int n;
	cin >> n;
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}
