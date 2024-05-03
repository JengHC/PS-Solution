#include<iostream>
#include<vector>
#define INT long long
using namespace std;

int arr[1000001], N;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int max = 0;
		long long sum = 0;

		cin >> N;
		for (int i = 1; i<=N; i++)
		{
			cin >> arr[i];
		}
		max = arr[N];

		for (int i = N - 1; i > 0; i--)
		{
			if (max < arr[i])
			{
				max = arr[i];
			}
			else
			{
				sum += max - arr[i];
			}
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}