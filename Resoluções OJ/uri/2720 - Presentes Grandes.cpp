// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Presentes Grandes
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2720

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long

using namespace std;

struct objeto{
    int i,h,l,w;
};

int n,k,t;
objeto presentes[100123];

bool cmp(objeto a, objeto b){
    if (a.h*a.l*a.w != b.h*b.l*b.w) return a.h*a.l*a.w > b.h*b.l*b.w;
    return a.i < b.i;
}

bool cmp2(objeto a, objeto b){
    return a.i < b.i;
}

int main(){_
    for (cin>>t; t--;){
        cin>>n>>k;
        for (int i=0; i<n; i++){
            cin>>presentes[i].i>>presentes[i].h>>presentes[i].l>>presentes[i].w;
        }
        sort(presentes, presentes + n, cmp);
        sort(presentes, presentes + k, cmp2);
        cout<<presentes[0].i;
        for (int i=1; i<k; i++){
            cout<<" "<<presentes[i].i;
        }
        cout<<endl;
    }
    return 0;
}

