#include <iostream>
using namespace std;
int main() {
    long long n,i,A=0;
    cin >>n;
    long long a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    for(i=1;i<=n;i++) {
        A+=a[i];
    }
    cout <<A;
    return 0;
}