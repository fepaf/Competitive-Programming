#include<bits/stdc++.h>
#define MAXN (1<<20)
#define _ ios_base::sync_with_stdio(0);

/*
Problem: Xor Pyramid
Link: https://cses.fi/problemset/task/2419
*/

using namespace std;

int n, a, x;

int main(){_
    cin>>n;
    for (int i=1; i<=n; ++i){
        cin >> a;
        x ^= (((n-1)&(i-1)) == (i-1) ? a : 0);
    }
    cout << x << endl;
    return 0;
}
