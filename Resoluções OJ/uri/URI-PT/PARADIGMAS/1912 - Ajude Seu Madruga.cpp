// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude Seu Madruga
// Nível: 1
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1912

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

int n;
double a,c[MAX],sum,lo,hi,mid,big;

int main(){_
    while ((cin>>n>>a)&&(n||a)){
        sum=big=0.0;
        for (int i=n;i--;){
            cin>>c[i];
            sum+=c[i];
            big=max(big,c[i]);
        }
        if (sum==a) cout<<":D"<<endl;
        else if (sum<a) cout<<"-.-"<<endl;
        else {
            lo=0, hi=big;
            for (int i=31; i--;){
                mid=lo+(hi-lo)/2.0;
                sum=0.0;
                for (int j=n;j--;){
                    if (c[j]>mid) sum+=(c[j]-mid);
                }
                if (sum-a<EPS) hi=mid;
                else lo=mid;
            }
            cout<<fixed<<setprecision(4)<<lo<<endl;
        }
    }
    return 0;
}

