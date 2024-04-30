#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N;
	cin >> N;

	// N의 약수를 구할때는,
	// 1부터 N의 제곱근까지의 수만 0으로 나눠떨어지는지 확인!

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
            cout << i << " ";
		}
	}
	return 0;
}