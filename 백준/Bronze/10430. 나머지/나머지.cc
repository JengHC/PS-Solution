#include <iostream> //입출력 헤더파일
using namespace std;

int main()
{
    int A;
    int B;
    int C;

    //cin >> (입력) cout << (출력)
    cin >> A;
    cin >> B;
    cin >> C;

    cout << (A + B) % C << endl;
    cout << ((A % C) + (B % C)) % C << endl;
    cout << (A * B) % C << endl;
    cout << ((A % C) * (B % C)) % C << endl;

    return 0;
}

