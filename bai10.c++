#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a,b,c,p,S;
    cin >>a>>b>>c;
    if(((a+b) >c) && ((a+c) >b) && ((b+c) >a)) {
        p= (a+b+c)/2;
        S= sqrt(p*(p-a)*(p-b)*(p-c));
        cout << fixed<< setprecision(4)<<S;
    } else {
        cout <<"No Solution";
    }
    return 0;
}