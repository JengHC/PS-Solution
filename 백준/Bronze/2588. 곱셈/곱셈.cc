#include <iostream> //입출력 헤더파일
using namespace std;

int main()
{
    int A, B;

    //cin >> (입력) cout << (출력)
    cin >> A >> B;

    cout << A * (B % 10) << endl;
    cout << A * ((B % 100) / 10) << endl;
    cout << A * (B / 100) << endl;
    cout << A * B  << endl;

    return 0;
}
