#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;


    for(int i = 0; i < B; i++)
    {
        A+=B;
        cout<< A << endl;
    }
    return 0;
}