#include <iostream>
using namespace std;

int main() {
    int A;
    cin>>A;

    if(A%13==0 || A%19==0)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}