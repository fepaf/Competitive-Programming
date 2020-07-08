// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo com Números
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1707

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define vi vector<int>
#define pb push_back

using namespace std;

i64 dp[20][2][200];
vi dig;

vi getDigits(int x){
    vi ans;
    do{
        ans.pb(x%10);
        x /= 10;
    }while(x);
    return ans;
}

i64 solve(int idx, int pref, int sum){
    if (idx == -1) return sum;
    i64 &ans = dp[idx][pref][sum];
    if (~ans) return ans;
    int limit = (pref ? dig[idx] : 9);
    ans = 0;
    for (int d=(idx==0); d<=limit; d+=(1+(idx==0))){
        ans += solve(idx-1, (d < dig[idx] ? 0 : pref), sum+d);
    }
    return ans;
}

i64 f(int x){
    dig = getDigits(x);
    memset(dp,-1,sizeof(dp));
    return solve(dig.size()-1, 1, 0);
}

i64 x, y;

int main(){_
    while (cin>>x>>y){
        cout<<f(max(x,y))-f(min(x,y)-1)<<endl;
    }
    return 0;
}

