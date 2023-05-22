#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned long long D, N, uN, rN, K, uD;
    cin >> D;
    
    if (D<10) N = D*2;
    else N = D;
    uN = N%10;
    rN = N/10;
    
    while ((N-rN)%uN != 0) {
        N += D;
        uN = N%10;
        rN = N/10;
    }
    
    cout << (D-rN)/uN << endl;
 
    return 0;
}