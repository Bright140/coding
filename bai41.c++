#include <iostream>
using namespace std;
void hsts(int x) {
    if(x==10) {
        cout <<"A";
    } else if(x==11) {
        cout <<"B";
    } else if(x==12) {
        cout <<"C";
    } else if(x==13) {
        cout <<"D";
    } else if(x==14) {
        cout <<"E";
    } else if(x==15) {
        cout <<"F";
    }
}
int main() {
    int n,a,b;
    cin >>n;
    a=n/16;
    b=n%16;
    if((a>=10)&&(b>=10)) {
        hsts(a); hsts(b);
    } else if((a>=10)&&(b<10)) {
        hsts(a); cout<<b;
    } else if((a<10)&&(b>=10)) {
        cout <<a; hsts(b);
    } else {
        cout <<a<<b;
    }
    return 0;
}