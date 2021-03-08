#include<bits/stdc++.h>
#define MAXN (1<<20)
#define _ ios_base::sync_with_stdio(0);

/*
Problem: Missing Number
Link: https://cses.fi/problemset/task/1083
*/

using namespace std;

int n, a, x;

int main(){_
    cin>>n;
    x = ((n>>1)&1^(n&1?1:n));
    for (int i=n-1; i--;){
        cin >> a;
        x ^= a;
    }
    cout << x << endl;
    return 0;
}
