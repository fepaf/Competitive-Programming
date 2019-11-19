#include<bits/stdc++.h>
#define _ ios_base:sync_with_stdio(0);
#define MAXN 100123

using namespace std;

/*
problema: achar a soma da subsequencia de A[1..N] que possui maior valor
n <= 10**5
*/

int n, a[MAXN], memo[MAXN];

int f(int idx){

    if (idx == n) return 0;

    if (~memo[idx]) return memo[idx];

    return memo[idx] = max(f(idx+1) + a[idx], f(idx+1));
}

int main(){_
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }

    for (int i=0; i<n; ++i){
        memo[i] = -1;
    }

    cout << f(0) << endl;
    return 0;
}
