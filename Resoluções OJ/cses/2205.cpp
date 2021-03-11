#include<bits/stdc++.h>
#define MAXN (1<<20)
#define TAM const n
#define _ ios_base::sync_with_stdio(0);

/*
Problem: Gray Code
Link: https://cses.fi/problemset/task/2205
*/

using namespace std;

int n;

int main(){_
    cin>>n;
    for (int i=0;i<(1<<n);++i){
        for (int j=n; j--;){
            cout << (((1<<j)&(i^(i>>1))) ? 1 : 0);
        }
        cout << endl;
    }
    return 0;
}
