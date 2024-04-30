#include <iostream>
using namespace std;

int main()
{
    int a = 1; // 1부터 
    int n;     // 주어진 횟수 n
    cin >> n;
   
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";       // a값을 출력하면 1이 나옴, 이후에 2를 계속 곱해서 출력
        a *= 2;                 // 2를 반복해서 곱한다.
    }
    return 0;
}
