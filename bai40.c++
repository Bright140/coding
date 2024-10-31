#include <iostream>
using namespace std;
int main() {
    int N,i,k=0;
    cin >>N;
    for(i=1;i<(N-1);i++) {
        if((N%i==0)) {
            k+=i;
        } 
    }
    if(k>N) {
        cout <<"YES";
    } else {
        cout <<"NO";
    }
    return 0;
}