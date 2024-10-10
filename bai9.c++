#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x,C;
    cin >>x;
    if(x > 0) {
        C= pow(x,2) + sqrt(x) + 1;
        cout << fixed<< setprecision(6)<< C;
    } else if(x <= 0 && x != -3) {
        C= (pow(x,3) + (2*x) + 1)/(x + 3);
        cout << fixed<< setprecision(6)<< C;
    } else {
        cout <<"Div by zero";
    }
    return 0;
}