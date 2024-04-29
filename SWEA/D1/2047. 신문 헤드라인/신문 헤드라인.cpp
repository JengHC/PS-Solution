#include<iostream>
#include<string>
using namespace std;

// 소문자 > 대문자 변환
// 아스키코드 이용한것 두개 나뉨, 함수 라이브러리 사용한 것
int main(int argc, char** argv)
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		// 소문자 a는 아스키코드 97, z는 122
		// 대문자 a는 아스키코드 65 
		// if (s.at(i) >= 'a' && s.at(i) <= 'z') 로 사용해도 된다.

		// 왜 if문을 사용하는가? 
		// 소문자 a보다 내가 입력한 대문자의 원소가 작을때,
		// -32를 해주면, 대문자의 아스키코드 값이 나온다.

		if (s.at(i) >= 97 && s.at(i) <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	cout << s << " " << "\n";

	return 0;
}

/*
#include<iostream>
#include<string>
using namespace std;

// 소문자 > 대문자 변환
int main(int argc, char** argv)
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]); // 소문자 -> 대문자
		//s[i] = tolower(s[i]); // 대문자 -> 소문자
	}
	cout << s;

	return 0;
}
*/
