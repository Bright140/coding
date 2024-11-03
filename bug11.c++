#include <iostream>
using namespace std;
int main() {
    int n,a[n],i,d;
    d=0;
    cin >>n;
    for(i=0;i<n;i++) {
        cin >>a[i];
    }
    for(i=0;i<n;i++) {
        if(a[i]>0) {
            d= d+1;
        } else {
            continue;
        }
    }
    cout <<d;
    return 0;
}