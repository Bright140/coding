#include <iostream>
using namespace std;
int main() {
    long long x,A;
    cin >>x;
    if(x >= 10) {
         A= (x*x*x) + (5*x);
         cout <<A;
    } else if(x < 10) {
        A= (x*x) - (2*x) + 4;
        cout <<A;
    }
    return 0;
}