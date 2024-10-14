#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,s;
    cin >>h>>s;
    if((h==1)&&(s==2)) {
        cout <<"Hazzu";
    } else if((h==2)&&(s==3)) {
        cout <<"Hazzu";
    } else if((h==3)&&(s==1)) {
        cout <<"Hazzu";
    } else if((h==2)&&(s==1)) {
        cout <<"Sora";
    } else if((h==3)&&(s==2)) {
        cout <<"Sora";
    } else if((h==1)&&(s==3)) {
        cout <<"Sora";
    } else if(((h>=1)&&(h<=3))==((s>=1)&&(s<=3))) {
        cout <<"0";
    }
    return 0;
}