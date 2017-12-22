// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Uns
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1492

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 unsigned long long
#define vi vector<int>
#define eb push_back

using namespace std;

i64 dp[64][2][2][64];
vi digit_sup,digit_inf;
i64 fa,fb,a,b,n;
int t,k;

vi getDigits(i64 n){
    vi d;
    do{
        d.eb(n%2);
        n/=2;
    }while(n);
    return d;
}

i64 f(int idx, int restrito_sup, int restrito_inf, int cnt){

    // cout<<"idx : "<<idx<<endl;

    if (idx == -1) return cnt;

    if (~dp[idx][restrito_sup][restrito_inf][cnt]) return dp[idx][restrito_sup][restrito_inf][cnt];

    i64 ans = 0LL;

    int limit_sup = (restrito_sup ? digit_sup[idx] : 1);
    int limit_inf = (restrito_inf ? digit_inf[idx] : 0);

    // if (limit_inf==limit_sup && !limit_inf) cout<<"igual em "<<idx<<endl;

    for (int i=limit_inf; i<=limit_sup; i++){
        ans += f(idx-1, ((i < digit_sup[idx]) ? 0 : restrito_sup), ((i > digit_inf[idx]) ? 0 : restrito_inf), cnt+i);
    }

    return dp[idx][restrito_sup][restrito_inf][cnt] = ans;
}

int main(){_
    while (cin>>a>>b){
        memset(dp,-1,sizeof(dp)); digit_inf = getDigits(a); digit_sup = getDigits(b);
        int n = digit_sup.size() , m = digit_inf.size();
        for (int i=n; i>m; i--){
            digit_inf.eb(0);
        }
        /*for (auto d : digit_sup){
            cout<<d<<" ";
        }
        cout<<endl;
        for (auto d : digit_inf){
            cout<<d<<" ";
        }
        cout<<endl;*/
        cout<<f(n-1,1,1,0)<<endl;
    }
    return 0;
}

