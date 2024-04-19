// 8393 합
// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
// 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
// 1부터 n까지 합을 출력한다.



#include <iostream>
using namespace std;

int main()
{
    int num; // 수 입력
    cin >> num;

    int result = 0;

    for (int i = 1; i <= num; i++)
    {
        result = result + i;
    }
    cout << result;
}