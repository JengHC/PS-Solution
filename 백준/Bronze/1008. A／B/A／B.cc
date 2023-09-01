#include <iostream> //입출력 헤더파일
#include <iomanip>
using namespace std;

int main()
{
    double A;
    double B;

    //cin >> (입력) cout << (출력)
    cin >> A;
    cin >> B;

    cout << setprecision(10) << endl;
    cout << A / B << endl;

    return 0;
}

