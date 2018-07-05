// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Van
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2693

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int q,c;
string s;
char l;

struct st{
    int c;
    string s;
    char l;
};

bool cmp(st a, st b){
    if (a.c!=b.c) return a.c<b.c;
    if (a.l!=b.l) return a.l<b.l;
    return a.s<b.s;
}

st a[1<<20];

int main(){_
    while (cin>>q){
        for (int i=q;i--;){
            cin>>a[i].s>>a[i].l>>a[i].c;
        }
        sort(a,a+q,cmp);
        for (int i=0;i<q;i++){
            cout<<a[i].s<<endl;
        }
    }
    return 0;
}

