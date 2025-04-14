#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;

    int sum = A;

    for(int i = 0; i < B; i++)
    {
        sum += A;
        cout<< sum << endl;
    }
    return 0;
}