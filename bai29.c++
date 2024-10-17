#include <iostream>
using namespace std;
int main() {
    int n,i,p;
    cin >>n;
    for(i=1;i<=n;i++) {
        for(p=1;p<=i;p++) {
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}