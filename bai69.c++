#include <iostream>
using namespace std;
int main() {
    int n,x,i,k=0;
    cin >>n>>x;
    int a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    for(i=1;i<=n;i++) {
        if(a[i]<=x) {
            k++;
        }
    }
    cout <<k+1;
    return 0;
}