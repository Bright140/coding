#include <iostream>
using namespace std;
int main() {
    char s;
    int n,i,j;
    cin >>s;
    cin >>n;
    int x[n];
    for(i=1;i<=n;i++) {
        cin >>x[i];
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=x[i];j++) {
            cout <<s;
        }
        cout <<endl;
    }
    return 0;
}