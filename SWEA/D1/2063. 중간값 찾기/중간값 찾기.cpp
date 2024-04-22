
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	// vector 선언 - vector <[data type]> [변수이름]
	vector<int> arr;  // 비어있는 vector arr를 생성합니다.

	// ex 1.) vector<int> arr(5);   => 기본값을 0 으로 초기화 된 5개의 원소를 가지는 vector arr 를 생성
	// ex 2.) vector<int> arr(5,2); => 2로 초기화된 5개의 원소를 가지는 vector arr를 생성
	// ex 3.) vector<int> arr2(arr1);   => arr2는 arr1 vector를 복사해서 생성


	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a;
		cin >> a;

		// 마지막 원소 뒤에 원소a를 삽입합니다.
		arr.push_back(a);

	}
	sort(arr.begin(), arr.end()); 
	// arr.begin() 첫번째 원소를 가리킴
	// arr.end()   마지막의 "다음"을 가리킴 

	cout << arr[T / 2];

	return 0;
}