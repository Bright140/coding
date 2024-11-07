#include <iostream>
#include <cmath>
using namespace std;
long long dn(long long x) {
    long long s=0;
    while(x!=0) {
        s= s*10+(x%10);
        x/=10;
    }
    return s;
}
bool ss(long long y) {
    if(y<2) {
        return false;
    } else if(y==2) {
        return true;
    } else {
        for(long long i=2;i<=sqrt(y);i++) {
            if(y%i==0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    long long t,n,i,k;
    cin >>t;
    for(i=1;i<=t;i++) {
        cin >>n;
        k= dn(n);
        if(ss(k)) {
            cout <<"Yes";
        } else {
            cout <<"No";
        }
        cout <<endl;
    }
    return 0;
}