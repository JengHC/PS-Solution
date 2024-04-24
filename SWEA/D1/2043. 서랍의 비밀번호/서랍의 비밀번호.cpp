#include <iostream>
using namespace std;

int main()
{
    int p,k,num = 1;
    cin >> p >> k;

    while (1)
    {
        if (p > k)
        {
            num = (p - k) + 1;
        }
        else
        {
            cout << "not password" << endl;
        }break;
    }
    cout << num <<endl;
    return 0;
}
