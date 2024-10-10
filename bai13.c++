#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,p;
    cin >>n>>p;
    float T= (float) n/(p*4);
    cout <<ceil(T);
    return 0;
}