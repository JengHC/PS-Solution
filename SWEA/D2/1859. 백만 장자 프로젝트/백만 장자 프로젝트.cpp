#include<iostream>
#include<vector>
#define INT long long
using namespace std;

int arr[1000001], N; // 배열과 변수 선언

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int max = 0;       // 최대 매매가 초기화
		long long sum = 0; // 이익의 합 초기화

		cin >> N;
		for (int i = 1; i<=N; i++)  // 각 날짜의 매매가 입력
		{
			cin >> arr[i];
		}
		max = arr[N];               // 최대 매매가 초기화

		for (int i = N - 1; i > 0; i--) // 역순으로 각 날짜에 대해
		{
			if (max < arr[i])           // 최대 매매가 갱신
			{
				max = arr[i];
			}
			else                        // 최대 매매가를 넘지 못하면
			{
				sum += max - arr[i];    // 이익을 더함
			}
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}