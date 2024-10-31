#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,i;
    double t=0;
    cin >>n;
    for(i=1;i<=n;i++) {
        t+= (double) 1/i;
    }
    cout << fixed<< setprecision(6)<<t;
    return 0;
}