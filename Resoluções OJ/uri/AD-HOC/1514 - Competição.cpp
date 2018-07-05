// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Competição
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1514

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int n,m,x,ans,part1,part2;
vi andl,orl,andc,orc;

int main(){_
    while ((cin>>n>>m)&&(n||m)){
        andl = vi(n,1), andc = vi(m,1), orl = vi(n,0), orc = vi(m,0);
        for (int i=n;i--;){
            for (int j=m;j--;){
                cin>>x;
                andl[i]&=x, andc[j]&=x, orl[i]|=x, orc[j]|=x;
            }
        }
        ans=0;
        part1=0, part2=1;
        for (int i=n;i--;){
            part1|=andl[i]; //4
            part2&=orl[i]; // 1
        }
        ans+=!part1+part2;
        part1=0, part2=1;
        for (int i=m;i--;){
            part1|=andc[i]; //3
            part2&=orc[i];// 2
        }
        ans+=!part1+part2;
        cout<<ans<<endl;
    }
    return 0;
}

