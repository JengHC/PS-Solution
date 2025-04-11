#include <iostream>
using namespace std;

int main() {
     int weight = 13;
    double gravityScale = 0.165;   
    double wg = weight * gravityScale;

    cout<<fixed<<setprecision(6);    
    cout << weight << " * " << gravityScale << " = " << wg << endl;

    return 0;
}