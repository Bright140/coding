#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,a,b;
    float x,y;
    cin >>n;
    y= (float)1/n;
    for(a=1;a<=200;a++) {
        for(b=1;b<=200;b++) {
            x=(float)1/a + (float)1/b;
            if(abs(x-y) < 1e-6) {
                cout <<a<<" "<<b<<endl;
            } else {
                continue;
            }
        }
    }
    return 0;
}