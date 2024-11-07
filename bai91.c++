#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int x) {
    int s=0,l=0,j;
    j=x;
    while(j!=0) {
        l++;
        j/=10;
    }
    while(x!=0) {
        s=(int)s+pow((x%10),l);
        x/=10;
    }
    return s;
}
int main() {
    int n,i,k=0;
    cin >>n;
    int a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
        if(a[i]==armstrong(a[i])) {
            k++;
        }
    }
    cout <<k;
    return 0;
}