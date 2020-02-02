#include<bits/stdc++.h>
#define MAX 100123
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,q,t;
string s[MAX];
int pai[MAX];

int id(int n){ return pai[n]==n? pai[n] : pai[n]=id(pai[n]);}

void join(int u,int v){
    u = id(u), v = id(v);
    pai[v]=u;
}

map<string, int> cod;
int cnt=1;

string a, b;

int main(){
    cin >> n >> q;
    for(int i=0;i<n;i++){
        cin >> s[i];
        cod[s[i]] = cnt++;
        pai[i] = i;
    }
    pai[n] = n;
    while (q--){
        cin >> t >> a >> b;
        if (t==1){
            join(cod[a], cod[b]);
        }
        else {
            cout << ((id(cod[a]) == id(cod[b])) ? "yes" : "no") << endl;
        }
    }
    cout << endl;
    
    return 0;  
}