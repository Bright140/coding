#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin >>n;
    float a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    for(i=1;i<=n;i++) {
        if((a[i]>=8.5)&&(a[i]<=10)) {
        cout <<"A ";
    } else if((a[i]>=8.0)&&(a[i]<8.5)) {
        cout <<"B+ ";
    } else if((a[i]>=7.0)&&(a[i]<8.0)) {
        cout <<"B ";
    } else if((a[i]>=6.5)&&(a[i]<7.0)) {
        cout <<"C+ ";
    } else if((a[i]>=5.5)&&(a[i]<6.5)) {
        cout <<"C ";
    } else if((a[i]>=5.0)&&(a[i]<5.5)) {
        cout <<"D+ ";
    } else if(a[i]<5.0)
        cout <<"D ";
    }
    return 0;
}