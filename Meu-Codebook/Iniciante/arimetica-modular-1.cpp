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



int n, m, a[MAX];
long long sum;

int main(){_
    while (cin >> n >> m){
        sum = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
            sum = ((sum % m) + (a[i] % m)) % m;
        }
        cout << sum << endl;
    }
    return 0;
}
