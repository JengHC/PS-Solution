#include <iostream>
using namespace std;

int main()
{
	int a, b, c; //a=시간, b=분, c=조리시간

	cin >> a >> b >> c;

	int m = a * 60 + b; // m은 분, 시간과 분을 하나로 합침.
	m = m + c; // 조리 시간 더하기.

	// ex). 70분 = 1시간 10분 
	// 70을 60으로 나누면 몫은 시간, 나머지는 분 
	// ex). 24시 이상이 되면 % 24를 해서, 0부터
	// 25시 00분이면 01시 00분으로 
	int hour = (m / 60) % 24;
	int M = m % 60;

	cout << hour << " " << M;
}