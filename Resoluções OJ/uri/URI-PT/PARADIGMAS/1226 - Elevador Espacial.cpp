// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Elevador Espacial
// Nível: 6
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1226

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 unsigned long long
#define vi vector<int>
#define eb push_back

using namespace std;

i64 dp[20][2][10];
vi digit;
i64 fa,fb,a,b,n;
int t,k;

vi getDigits(i64 n){
    vi d;
    do{
        d.eb(n%10);
        n/=10;
    }while(n);
    return d;
}

i64 f(int idx, int restrito, int ant){

    // cout<<idx<<" "<<sum<<endl;

    if (idx == -1) return 1LL;

    if (~dp[idx][restrito][ant]) return dp[idx][restrito][ant];

    i64 ans = 0LL;

    int limit = (restrito ? digit[idx] : 9);

    for (int i=0; i<=limit; i++){
        if (i==4 || (ant==1 && i==3)) continue;
        ans += f(idx-1,((i < digit[idx]) ? 0 : restrito),i);
    }

    return dp[idx][restrito][ant] = ans;
}

i64 lo,hi,mid;

int main(){_
    while (cin>>n){
        lo = n , hi = -1;
        while (lo<hi){
            mid = lo + (hi-lo)/2;

            digit = getDigits(mid);
            memset(dp,-1,sizeof(dp));

            if (f(digit.size()-1,1,-1)>=n+1) hi = mid;
            else lo = mid + 1;
        }
        cout<<lo<<endl;
    }
    return 0;
}

