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

queue<string> fila;
map<string, int> nivel;
int n, x, y;
string s;

/*
só pode usar 0 e 1
*nao pode colocar ter 11's nas palvras
*n-ésima palavra (n < 1e6)
* 0, é 1a e 1 é 2a
* elas tão ordenadas por tamanho, depois lexicografica

0, 1, 00, 01, 10, 000, 001...

0 -> 0, 1
1 -> 0

0_, 1_, 00, 01 , 10
*/

int main(){_
    cin >> n;
    fila.push("0");
    nivel["0"] = 1;
    fila.push("1");
    nivel["1"] = 1;

    for (int i=0; i<n; ++i){
        s = fila.front(); fila.pop();
      
        cout << (i+1) << " : " << s << " " << nivel[s] << endl;
      
        if (s[sz(s)-1] == '0'){
            fila.push(s+"0");
            nivel[s+"0"] = nivel[s]+1;
            fila.push(s+"1");
            nivel[s+"1"] = nivel[s]+1;
        }
        else {
            fila.push(s+"0");
            nivel[s+"0"] = nivel[s]+1;
        }
    }

    cout << "Resposta:" << s << endl;
    
    return 0;        
}