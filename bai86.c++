#include <iostream>
using namespace std;
int main() {
    int m,n,p,x,y,z,k;
    cin >>m>>n>>p;
    int a[m][n],b[n][p];
    for(x=0;x<m;x++) {
        for(y=0;y<n;y++) {
            cin >>a[x][y];
        }
    }
    for(y=0;y<n;y++) {
        for(z=0;z<p;z++) {
            cin >>b[y][z];
        }
    }
    for(x=0;x<m;x++) {
        for(z=0;z<p;z++) {
            k=0;
            for(y=0;y<n;y++) {
                k+=a[x][y]*b[y][z];
            }
            cout <<k<<" ";
        }
        cout <<endl;
    }
    return 0;
}