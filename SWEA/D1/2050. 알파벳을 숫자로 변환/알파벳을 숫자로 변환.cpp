#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	
	string a;
	cin >> a;

	// a.length()를 사용하는 이유는 문자의 길이만큼 숫자로 변환 해야하기에
	for (int i = 0; i < a.length(); i++)
	{
		//.at()는 원소 접근 방법임 
		// at(i)면 ABCD~ 이렇게 입력 되었을때 at(1)이면 A가 출력
		// A는 대문자로, 아스키코드 65를 나타냄. 그래서 -64를 하면 1이 남음

		cout << a.at(i) - 64 << " "; 
	}

	return 0;
}