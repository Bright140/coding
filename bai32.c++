#include <iostream>
using namespace std;
int main() {
    long long n,S,i;
    S=0;
    cin >>n;
    for(i=1;i<=n;i++) {
        S+=i;
    }
    cout <<S;
    return 0;    
}