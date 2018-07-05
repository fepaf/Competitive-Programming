// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Churras no Yuri
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2633

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 100123
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define is pair<int,string>
#define fs first
#define sc second
#define int long long

using namespace std;

int n,d;
string s;
priority_queue<is, vector<is>,  greater<is> > pq;

signed main(){_
    while ((cin>>n)&&n){
        for (int i=n;i--;){
            cin>>s>>d;
            pq.push(is(d,s));
        }
        if (n){
            s = pq.top().sc; pq.pop();
            cout<<s;
            while (!pq.empty()){
                s = pq.top().sc; pq.pop();
                cout<<' '<<s;
            }
            cout<<endl;
        }

    }
    return 0;
}

