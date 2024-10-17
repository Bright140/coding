#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,a[n],i,t;
    t=0;
    cin >>n;
    for(i=0;i<n;i++) {
        cin >>a[i];
    }
    for(i=0;i<n;i++) {
        t+= a[i];
    }
    float d= (float)  t/n;
    cout <<"Giá trị trung bình công là: "<< fixed << setprecision(1) <<d;
    return 0;
}