// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Enigma
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2699

 #include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long

using namespace std;

i64 dp[1<<10][1<<10];
string s,back;
int n,m,impressed,has;

i64 solve(int idx, int resto){
    if (idx == m){
        if (resto==0){
            if (!impressed){
                cout<<back<<endl;
                impressed = 1;
            }
            return 1;
        }
        else{
            return 0;
        }
    }

    if (~dp[idx][resto]) return dp[idx][resto];

    int limit = 9;

    i64 ans = 0;

    if (s[idx] == '?') {
        for (int i = (idx == 0); i <= limit; i++){
            back[idx] = i+'0';
            ans |= solve(idx+1,(10*resto+i)%n);
        }
    }
    else {
        back[idx] = s[idx];
        ans |= solve(idx+1,(10*resto+(s[idx]-'0'))%n);
    }
    return dp[idx][resto] = ans;
}

int main(){_
    while (cin>>s>>n){
        m = s.size(); memset(dp,-1,sizeof(dp)); impressed = 0; back = s;
        has = solve(0,0);
        if (!has) cout<<"*"<<endl;
    }
    return 0;
}
