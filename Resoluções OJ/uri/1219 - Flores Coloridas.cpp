// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Flores Coloridas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1219

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

double a,b,c,i,e,t,p,pi=2*acos(0.0),area,ri,re;

int main(){_
    while (cin>>a>>b>>c){
        p = (a+b+c)/2;
        area = sqrt(p*(p-a)*(p-b)*(p-c));
        ri = area/p;
        re = (a*b*c)/(4*area);
        i = pi*ri*ri;
        e = pi*re*re;
        t = area - i;
        e = e - area;
        cout<<fixed<<setprecision(4);
        cout<<e<<' '<<t<<' '<<i<<endl;
    }
    return 0;
}

