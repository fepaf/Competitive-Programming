#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define pb push_back
#define fs first
#define sc second

using namespace std;

vi primos;
int ehcomposto[1000123];

void crivo(int n){
    primos.pb(2);
    for (int i=3; i*i<=n; i+=2){
        if (!ehcomposto[i]){
            primos.pb(i);
            for (int j = i*i; j<=n; j+=2*i){
                ehcomposto[j]=1;
            }
        }
    }
    int t = primos.size();
    for (int i=primos[t-1]+2; i<=n; i+=2){
        if (!ehcomposto[i]){
            primos.pb(i);
        }
    }
}

int main(){_
    crivo(100);
    for (int i=0; i<primos.size(); i++){
        cout<<primos[i]<<" ";
    }
    cout<<endl;
    return 0;
}
