#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, op;
stack<string> pilha;
string s;

int main(){_
    while (cin >> op){
        if (op==1){
            cin >> s;
            pilha.push(s);
            cout << "colocou " << s << endl;
        } else if (op == 2){
            if (!pilha.empty()){
                pilha.pop();
                cout << "retirou" << endl;
            } else {
                cout << "proibido! vazio!" << endl;
            }
        } else if (op==3){
            if (!pilha.empty()){
                cout << "topo " << pilha.top() << endl;
            } else {
                cout << "proibido! vazio!" << endl;
            }
        }
    }
    return 0;
}
