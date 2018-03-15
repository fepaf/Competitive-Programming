#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123

using namespace std;

/*
soma N números e mostra o resultado do resto por M;

1 <= N <= 10**6
1 <= A[i] <= 10**18
1 <= M <= 10**9
*/

string n;
int m, r, d;

int main(){_
    while (cin >> n >> m){
        r = 0;
        for (int i = 0; i< (int)n.size(); ++i){
            d = (n[i]-'0');
            r = (((10 % m) * r) % m  + d % m) % m;
        }
        cout << r << endl;
    }
    return 0;
}
