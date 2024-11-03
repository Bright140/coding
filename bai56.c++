#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long n,v,i,k=0;
    cin >>n;
    long a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    v=a[1];
    for(i=2;i<=n;i++) {
        v=max(v,a[i]);
    }
    for(i=1;i<=n;i++) {
        if(v==a[i]) {
            continue;
        }
        k+=a[i];
    }
    cout <<k;
    return 0;
}