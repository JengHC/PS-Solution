#include <iostream>
using namespace std;

int main() {
    int A;
    cin>>A;

    if(A>=80)
    {
        cout<< "pass" << endl;
    }
    else 
    {
        cout<< (80-A) << " more score" << endl;
    }
    return 0;
}