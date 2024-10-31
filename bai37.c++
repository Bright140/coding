#include <iostream>
using namespace std;
int main() {
    int n,h,p,s,a;
    cin>>n;
    h=n/3600;
    a=n%3600;
    p=a/60;
    s=a%60;
    if((h<10)&&(p<10)) {
        cout <<"0"<<h<<":"<<"0"<<p<<":"<<s;
    } else if((h<10)&&(s<10)) {
        cout <<"0"<<h<<":"<<p<<":"<<"0"<<s;
    } else if((p<10)&&(s<10)) {
        cout <<h<<":"<<"0"<<p<<":"<<"0"<<s;
    } else if((h<10)&&(p<10)&&(s<10)) {
        cout <<"0"<<h<<":"<<"0"<<p<<":"<<"0"<<s;
    } else if(h<10) {
        cout <<"0"<<h<<":"<<p<<":"<<s;
    } else if(p<10) {
        cout <<h<<":"<<"0"<<p<<":"<<s;
    } else if(s<10) {
        cout <<h<<":"<<p<<":"<<"0"<<s;
    } else {
        cout <<h<<":"<<p<<":"<<s;
    }
    return 0;
}