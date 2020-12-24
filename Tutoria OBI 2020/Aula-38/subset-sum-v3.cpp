#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define MAXS (1<<10)

using namespace std;

int n; // quantidade de elementos no A[]
int a;
int s;
bitset<MAXS> dp;// dp[i]=1 diz se a soma i é possível, dp[i]=0 caso contrario

int main(){_
    cin >> n >> s;
    dp[0]=1;
    for (int i=0; i<n; i++){
        cin >> a;
        dp |= (dp<<a);
    }
    cout << (dp[s] ? "sim" : "nao") << endl;
}