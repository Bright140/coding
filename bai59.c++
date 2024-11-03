#include <iostream>
using namespace std;
int main() {
    int n,i,j,k=0;
    cin >>n;
    int a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(a[i]==a[j]) {
                k+=1;
            } 
        }
        if(k%2!=0) {
            cout <<a[i];
            break;
        } 
    }
    return 0;
}