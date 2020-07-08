// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ele Está Impedido!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1410

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

int a,d,b,c;

int main(){_
    while ((cin>>a>>d)&&(a||d)){
        priority_queue <int, vi, greater<int> > atk,dfs;
        while (a--){
            cin>>b;
            atk.push(b);
        }
        while (d--){
            cin>>c;
            dfs.push(c);
        }
        a = atk.top() , d = dfs.top();
        dfs.pop();
        c = dfs.top();
        cout<<(a < c ? 'Y' : 'N')<<endl;
    }

    return 0;
}

