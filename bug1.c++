#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=1500,b=2700;
    for(a;a<=b;a++) {
        if((a%9==0)&&(a%6!=0)) {
            cout <<a<<";";
        } else {
            continue;
        }
    }
    return 0;
}