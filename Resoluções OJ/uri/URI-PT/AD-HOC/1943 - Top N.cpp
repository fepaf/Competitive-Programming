// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Top N
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1943

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100123
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int k,top[]={1,3,5,10,25,50,100},i;

int main(){_
    while (cin>>k){
        cout<<"Top "<<*lower_bound(top,top+7,k)<<endl;
    }
    return 0;
}

