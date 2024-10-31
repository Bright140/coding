#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin >>n;
    for(a=1;a<=((2*n)+1);a++) {
        for(b=1;b<=((2*n)+1);b++) {
            if((a==b)||(b==((2*n)+2-a))) {
                cout <<"* ";
            } else {
                cout <<". ";
            }
        }
        cout <<endl;
    }
    return 0;
}