#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,p,q,i;
    cin >>n>>p>>q;
    for(i=1;i<=n;i++) {
        if((i%p==0)||(i%q==0)) {
            cout<<i<<" ";
        } else {
            continue;
        }
    }
    return 0;
}