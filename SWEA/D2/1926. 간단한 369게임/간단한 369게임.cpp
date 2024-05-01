#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int N;
	cin >> N;

	// N % 10 == 3 을 이용해서 나머지 즉, 일의 자리가 3,6,9 인수를 찾는다.
	// 
	for (int i = 1; i <= N; i++)
	{
		int num = i; // 숫자를 처리하기위해 num 선언, i로 초기화
		int count = 0; // 숫자에 포함된 3,6,9,의 개수를 저장하기 위해 변수 설정

		while (num > 0)
		{
			if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
			{
				count++;      // 3,6,9의 개수 확인
			}
			num /= 10;         
			// num을 10으로 나눈 몫을 num에 저장
			// num을 10으로 나눠 일의자리 없앰
		}
		if (count == 0)       // 3,6,9가 없는 경우
		{
			cout << i << " ";
		}
		else
		{
			for (int j = 0; j < count; j++) // 3,6,9갯수에 따라 -출력
			{
				cout << "-";
			}
			cout << " ";
		}
	}
	return 0;
}
// 이런것도 하나 푸는데 모르는게 줜나 많네 
// shipR 계속 해보자 