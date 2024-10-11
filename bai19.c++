#include <bits/stdc++.h>
using namespace std;
int main() {
    float x;
    cin >>x;
    if((ceil(x)>=0)&&(ceil(x)<=25)) {
        cout <<"Interval [0,25]";
    } else if((ceil(x)>25)&&(ceil(x)<=50)) {
        cout <<"Interval (25,50]";
    } else if((ceil(x)>50)&&(ceil(x)<=75)) {
        cout <<"Interval (50,75]";
    } else if((ceil(x)>75)&&(ceil(x)<=100)) {
        cout <<"Interval (75,100]";
    } else {
        cout <<"Out of Intervals";
    }
    return 0;
}