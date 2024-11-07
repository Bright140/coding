#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int m,n,i,j,k=0;
    float l;
    cin >>m>>n;
    int a[m][n];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            cin >>a[i][j];
            if(a[i][j]==0) {
                k++;
            }
        }
    }
    l=(float)(m*n)/2;
    if(k>=ceil(l)) {
        cout <<"Yes";
    } else {
        cout <<"No";
    }
    return 0;
}