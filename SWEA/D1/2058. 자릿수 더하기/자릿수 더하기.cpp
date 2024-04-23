#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	// 자릿수 더하기
	// 10으로 나눈 나머지로 일의 자리 숫자를 구한다.
	// 계속 반복해서 일의자리를 구함.
	// 몫이 0이면 종료
	int n, sum = 0;

	cin >> n;

	while (n!= 0)           // 입력 받은 수가 0이 될때까지 밑에 과정 반복
	{
		sum = sum + n % 10; // 입력 받는 수를 10으로 나눈 나머지를 sum에 더한다.
		n /= 10;            // 입력 받은 수를 10으로 계속 나눈다.   
	}
	cout << sum << endl;
	return 0;
}