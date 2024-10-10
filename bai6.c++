#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long a,b;
    float x;
    cin >>a>>b;
    if(a != 0) {
        x = (float)-b/a;
        cout << fixed << setprecision(2) <<x;
    } else if((a==0) && (b!=0)) {
        cout <<"No Solution";
    } else if((a==0) && (b==0)) {
        cout <<"Many Solutions";
    }
    return 0;
}