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

priority_queue<int> pq; // max-heap -> o maior tá sempre no topo
// priority_queue<int, vi, greater<int>() > pq; // min-heap -> o menor tá sempre no topo
int n, x, op;

int main(){_
    
    while ((cin >> op) && op!=-1){
        if (op==1){ // coloca na pq
            cin >> x;
            pq.push(x);
            cout << "colocou " << x << endl;
        } else if (op == 2){ // retira da pq
            if (!pq.empty()){
                pq.pop();
                cout << "retirou" << endl;
            } else {
                cout << "vazio" << endl;
            }
        } else if (op == 3){ // imprime o maior
            if (!pq.empty()){
                cout << "maior: " << pq.top() << endl;
            } else {
                cout << "vazio" << endl;
            }
        }
    }
    return 0;
}
