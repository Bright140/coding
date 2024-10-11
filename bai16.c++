#include <iostream>
using namespace std;
int main() {
    int a,b,c,x,y;
    cin >>a>>b>>c>>x>>y;
    if((x>=a&&y>=b)||(x>=a&&y>=c)||(x>=b&&y>=a)||(x>=b&&y>=c)||(x>=c&&y>=a)||(x>=c&&y>=b)) {
        cout <<"Yes";
    } else {
        cout <<"No";
    }
    return 0;
}