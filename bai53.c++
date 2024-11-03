#include <iostream>
using namespace std;
int main() {
    int n,i,x=0,y=0,z=0,v=0;
    cin >>n;
    int a[n];
    for(i=1;i<=n;i++) {
        cin >>a[i];
    }
    for(i=1;i<=n;i++) {
        if(a[i]<0) {
            x+=1;
        } if(a[i]>0) {
            y+=1;
        } if(a[i]%2==0) {
            z+=1;
        } if(a[i]%2!=0) {
            v+=1;
        }
    }
    cout <<x<<endl;
    cout <<y<<endl;
    cout <<z<<endl;
    cout <<v<<endl;
    return 0;
}