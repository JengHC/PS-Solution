#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int mul = a*b;
    int div = b/a;

    if(a>b)
    {
        cout<<mul<<endl;
    }
    else
    {
        cout<<div<<endl;
    }
    return 0;
}