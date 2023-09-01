#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int count[42] = {};

	int a;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		count[a % 42]++;
	}
	int result = 0;

	for (int a : count)
	{
		if(a > 0)
		{
			result++;
		}
	}
	cout << result;

	return 0;
}