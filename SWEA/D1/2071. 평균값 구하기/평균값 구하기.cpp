#include<iostream>
#include<cmath> 
// cmath라이브러리
// 올림   : ceil
// 내림   : floor
// 반올림 : roung
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;            // 10개의 수를 입력받기 위해 T 변수 설정

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int sum = 0;

		for (int i = 0; i < 10; i++)  // 10개의 수가 주어진다
		{
			int num;                  
			cin >> num;				  // 10개의 수가 입력되면,

			sum += num;               // sum에 num값을 합한다.
		}
	
	cout << "#" << test_case << " " << round(sum / 10.0) << '\n';
	// round는 반올림이기 때문에 sum을 10.0으로 나눈 값을 round로 반올림
	}
	return 0;
}