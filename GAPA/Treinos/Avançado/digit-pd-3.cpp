#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<i64>
#define pb push_back
#define i64 long long

/*
Quantos numeros entre A e B digito K aparece N vezes
*/

using namespace std;

i64 dp[20][2][200];
i64 n,m,a,b,k,fa,fb;
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
//falha se o K=0
i64 solve(int idx, int restrito, int cnt){
    if (idx==-1) return (cnt == n);

    if (~dp[idx][restrito][cnt]) return dp[idx][restrito][cnt];

    int limit = (restrito ? dig[idx] : 9);

    i64 ans = 0LL;

    for (int d=0; d<=limit; d++){
        ans += solve(idx-1, (d < dig[idx] ? 0 : restrito), cnt + (d==k));
    }

    return dp[idx][restrito][cnt] = ans;
}

i64 f(i64 x){
    dig = getDigit(x);

    memset(dp,-1,sizeof(dp));

    return solve(dig.size()-1,1,0);
}


int main(){_
    while ((cin>>fa>>fb>>k>>n)&&(~fa && ~fb && ~n && ~k)){
        a = min(fa,fb) , b = max(fa,fb);
        cout<<(f(b)-f(a-1))<<endl;
    }
}
