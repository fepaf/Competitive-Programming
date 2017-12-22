// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pegadinha de Evergreen
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2722

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define MOD 1000000007
#define vl vector<i64>
#define vvl vector<vl>
#define eb emplace_back

using namespace std;

int t0,t1,c,n,q;
string s[2],ans;


int main(){_
    cin>>n;
    cin.ignore();
    while (n--){
        getline(cin, s[0]);
        getline(cin, s[1]);
        t0 = (int)s[0].size() , t1 = (int)s[1].size();
        if (t1 < t0) s[1]+="#";
        ans = "";
        for (int i=0; i<t0; i+=2){
            ans += s[0][i];
            ans += s[0][i+1];
            ans += s[1][i];
            ans += s[1][i+1];
        }
        cout<<ans.substr(0,2*t0-(s[1][t0-1]=='#'))<<endl;
        // cout<<s[0]<<endl<<s[1]<<endl;
    }

    return 0;
}

