// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: HM
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2793

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007
#define i64 long long
#define DEBUG 0

using namespace std;

i64 zeros, sum;
string s;

i64 fexpo(i64 b, i64 e){
    i64 ans;
    for (ans = 1LL; e; b=(b*b)%MOD, e/=2){
        if (e&1) ans = (ans*b)%MOD;
        if (DEBUG) cout << "in fexpo" << endl;
    }
    return ans;
}

int main(){_
    while (getline(cin,s)){
        sum = zeros = 0;
        for (auto c : s){
            sum += ((c=='M')-(c=='F'));
            if (DEBUG) cout << "sum " << sum << endl;
            zeros += (sum==0);
        }
        cout << fexpo(2,zeros-1) << endl;
    }
    return 0;
}

