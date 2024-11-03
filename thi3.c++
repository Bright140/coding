#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,s=0;
    cin >>n;
    int a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    for(i=1;i<=n;i++) {
        s+=a[i];
    }
    cout <<s;
    return 0;
}