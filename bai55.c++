#include <iostream>
using namespace std;
int main() {
    int N,i,k=0;
    cin >>N;
    int a[N];
    for(i=1;i<=N;i++) {
        cin >>a[i];
    }
    for(i=1;i<=N;i++) {
        if((a[i]%2==0)||((a[i]<0)&&(a[i]%3==0))) {
            k+=1;
        }
    }
    cout <<k;
    return 0;
}