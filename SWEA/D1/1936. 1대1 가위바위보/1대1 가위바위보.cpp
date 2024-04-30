// 가위는 1, 바위는 2, 보는 3으로 표현
// A : 가위(1), 바위(2), 보(3)
// B : 바위(2), 보(3), 가위(1)
//
// A가 이기는 경우로 생각해보면, 
// A - B == 1  (바위(2) - 가위(1) == 1)
// A - B == -2 (가위(1) - 보(3) == -2)
// A - B == 1 (보(3) - 바위(1) == 1)
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a, b;
	cin >> a >> b;

	if (a - b == -2 || a - b == 1)
	{
		cout << "A" << endl;
	}
	else
	{
		cout << "B" << endl;
	}

	return 0;
}
//#include<iostream>
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	int a,b;
//	cin >> a >> b;
//
//	if (a > b)
//	{
//		cout << "A" << endl;
//	}
//	else if (a < b)
//	{
//		cout << "B" << endl;
//	}
//	else
//	{
//		NULL;
//	}
//
//	return 0;
//}
