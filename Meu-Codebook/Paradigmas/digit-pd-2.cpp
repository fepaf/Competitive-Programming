#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<i64>
#define pb push_back
#define i64 long long

/*
Quantos numeros entre A e B possuem o digito K
*/

using namespace std;

i64 dp[20][2][200];
i64 n,m,a,b,k;
vi dig;
string c;

vi getDigit(i64 x){
    vi digitos;

    do{
        digitos.pb(x%10);
        x/=10;
    }while(x);

    return digitos;
}

i64 toral(i64 x){
    i64 a = 0LL;
    for (i64 i=x+1; i--;){
        int check = 1;
        vi digitos = getDigit(i);
        for (auto ch : digitos){
            check &= (c[ch]=='S');
        }
        a += check;
    }
    return a;
}

i64 solve(int idx, int restrito, int tem){
    if (idx==-1) return tem;

    if (~dp[idx][restrito][tem]) return dp[idx][restrito][tem];

    int limit = (restrito ? dig[idx] : 9);

    i64 ans = 0LL;

    for (int d=0; d<=limit; d++){
        ans += solve(idx-1, (d < dig[idx] ? 0 : restrito), tem || (d==k));
    }

    return dp[idx][restrito][tem] = ans;
}

i64 f(i64 x){
    dig = getDigit(x);

    memset(dp,-1,sizeof(dp));

    return solve(dig.size()-1,1,0);
}

int main(){_
    while ((cin>>n>>m>>k)&&(~n && ~m && ~k)){
        a = min(n,m) , b = max(n,m);
        cout<<(f(b)-f(a-1))<<endl;
    }
}
