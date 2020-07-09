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

vi fatoracao(int n){
    vi factors;

    for (int i=0; i<primos.size() && primos[i]*primos[i]<=n; i++){
        if (n%primos[i]==0){
            factors.pb(primos[i]);
            while (n%primos[i]==0){
                n/=primos[i];
            }
        }
    }

    if (n!=1){
        factors.pb(n);
    }

    return factors;
}

vi factors;
int n;

int main(){_
    crivo(1000000);

    while (cin>>n){
        factors = fatoracao(n);

        for (int i=0; i<factors.size(); i++){
            cout<<factors[i]<<" ";
        }
        cout<<endl<<endl;

    }

    cout<<endl;
    return 0;
}
