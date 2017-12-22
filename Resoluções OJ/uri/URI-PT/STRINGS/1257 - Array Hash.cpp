// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Array Hash
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1257

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
using namespace std;

string s;
int n,l,i,j,sum;

int main(){_
    cin>>n;
    while (n--){
        cin>>l;
        for (sum=i=0;i<l;i++){
            cin>>s;
            for (j=s.length();j--;) sum+=s[j]-'A'+i+j;
        }
        cout<<sum<<endl;
    }
    return 0;
}

