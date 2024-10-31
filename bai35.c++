#include <iostream>
using namespace std;
int main() {
    long long n,i,k;
    k=1;
    cin >>n;
    if((n==0)||(n==1)) {
        cout <<k;
    } else if(n%2!=0) {
        for(i=n;i>0;i-=2) {
            k*=i;
        }
        cout <<k;
    } else if(n%2==0) {
        for(i=n;i>0;i-=2) {
            k*=i;
        }
        cout <<k;
    }
    return 0;
}