#include <iostream>
using namespace std;
int main() {
    long long m,n;
    cin >>m>>n;
    if(m%n ==0 ||n%m ==0) {
        cout <<"Yes";
    } else {
        cout <<"No";
    }
    return 0;
}