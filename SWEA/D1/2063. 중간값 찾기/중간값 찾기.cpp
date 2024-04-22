
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	// 
	vector<int> arr;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a;
		cin >> a;

		// 
		arr.push_back(a);

	}
	sort(arr.begin(), arr.end());

	cout << arr[T / 2];

	return 0;
}