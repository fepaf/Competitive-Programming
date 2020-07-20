#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;

stack<int> pilha;
// queue<int>::iterator it;
int n, x, y;
string cmd;

int main(){_
    while (cin >> cmd){
        if (cmd == "i"){
            cin >> x;
            pilha.push(x);
        }else if (cmd == "f"){
            if (!pilha.empty()){
                cout << pilha.top() << endl;
            }else{
                cout << "vazio" << endl;
            }
        }else if (cmd == "p"){
            if (!pilha.empty()){
                pilha.pop();
                cout << "retirou" << endl;
            }else {
                cout << "vazio" << endl;
            }
        }
    

        // for (it = pilha.begin(); it!=fila.end(); it++){
        //     cout << (*it) << ' ';
        // }
        // cout << endl;
    }
    return 0;        
}