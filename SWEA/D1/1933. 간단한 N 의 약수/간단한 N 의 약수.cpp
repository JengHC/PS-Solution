#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N;
	cin >> N;
	// N값이 작을때 사용하는 풀이( N값이 커지면 비효율적)
	// 모든경우를 탐색하게 되는 O(N) 시간복잡도
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
