#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    float pi=3.141592653;
    float r;
    cin >>r;
    float S= 2*pi*r;
    cout << fixed << setprecision(2) <<S;
    return 0;
}