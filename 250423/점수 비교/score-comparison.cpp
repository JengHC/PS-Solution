#include <iostream>
using namespace std;

int main() {
    int A1,A2,B1,B2;
    cin>>A1>>A2;
    cin>>B1>>B2;

    if(A1>B1 && A2>B2)
    {
        cout<< 1 <<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}