#include <iostream>
using namespace std;
int main() {
    int n,i,t,a=0,b=1;
    cin >>n;
    for(i=2;i<n;i++) {
        if(t<=n) {
            t= a+b;
        } else {
            break;
        }
        a=b;b=t;
    }
    cout <<t;
    return 0;
}