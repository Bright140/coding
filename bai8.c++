#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long x,B;
    cin >>x;
    if(x > 3) {
        B = (x*x*x) + (2* (x*x)) + (5*x);
        cout <<B;
    } else if((x >=1) && (x <=3)) {
        B = (x*x) - (2*x) + 4;
        cout <<B;
    } else if(x < 1) {
        B = (5*x) - 8;
        cout <<B;
    }
    return 0;
}