#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,D,x1,x2,x;
    cin >>a>>b>>c;
    D= pow(b,2) - (4*a*c);
if((a!=0) && (D > 0)) {
    x1= (-b +sqrt(D))/(2*a);
    x2= (-b -sqrt(D))/(2*a);
    cout <<fixed <<setprecision(4)<<x1<<"\n";
    cout <<fixed <<setprecision(4)<<x2<<"\n";
} else if((a!=0) && (D == 0)) {
    x= -b/(2*a);
    cout <<fixed <<setprecision(4)<<x;
} else if((a!=0) && (D < 0)) {
    cout <<"No Solution";
}
return 0;
}