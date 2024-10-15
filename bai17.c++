#include <iostream>
using namespace std;
int main() {
    int n,s=0;
    cin >>n;
    if(n%2==0) {
        s+=1;
    } if((n<0)&&(n%3==0)) {
        s+=1;
    } if(s==1) {
        cout <<"Yes";
    } else {
        cout <<"No";
    }
    return 0;
}