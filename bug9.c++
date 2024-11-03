#include <iostream>
#include <string>
using namespace std;
int main() {
    string p;
    int i,d;
    d=0;
    getline(cin,p);
    for(i=0;i<p.length();i++) {
        d+=1;
    }
    cout <<d;
    return 0;
}