#include<bits/stdc++.h>
#define MAX 1123
using namespace std;

int dp[MAX][MAX];
string a,b;
int n,m;

int f(int i, int j){
    if (i>=n || j>=m) return 0;
    if (~dp[i][j]) return dp[i][j];

    if (a[i]==b[j]){
        return dp[i][j] = f(i+1,j+1)+1;
    }
    else {
        return dp[i][j] = max(f(i+1,j), f(i,j+1));
    }
}

int main(){
    cin >> a >> b;
    n = a.size();
    m = b.size();
    memset(dp,-1, sizeof(dp));
    cout << f(0,0) <<  endl;
    return 0;  
}