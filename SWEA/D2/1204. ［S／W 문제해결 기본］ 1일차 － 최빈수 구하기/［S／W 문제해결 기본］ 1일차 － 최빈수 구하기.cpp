#include <iostream>
#include <cstring>
using namespace std;

int score[101];

int main(int argc, char** argv)
{
	int test_case;
	int T;

	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		//테스트 케이스 번호
		int case_num;
		cin >> case_num;
		
		// 점수마다 사람 수 배열 초기화
		memset(score, 0, sizeof(score));

		//학생 수 1000반복
		for (int i = 0; i < 1000; i++)
		{
			int score2;
			cin >> score2;
			score[score2]++;
		}

		int res = 0;
		int tmp = 0;
		for (int i = 1; i < 101; i++)
		{
			if (score[i] >= tmp)
			{
				tmp = score[i];
				res = i;
			}
		}
		cout << "#" << case_num << " " << res << endl;

	}
	return 0;
}
