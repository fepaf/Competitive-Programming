#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 unsigned long long 

/*
unsigned long long consigo usar 0 a 63
long long consigo usar 0 a 62
*/


using namespace std;

i64 a, b, n, m, intersecao, uniao;
int x;

/*
Problema: Dois conjuntos A e B, com elemento no intervalo [0,64), qual a interseção deles?

*/

int main(){_
    cin >> n;
    
    a = 0ULL;
    for (int i=0; i<n; ++i){
        cin >> x;
        a |= (1ULL<<x);
    }
    
    cin >> m;
    b = 0ULL;
    for (int i=0; i<m; ++i){
        cin >> x;
        b |= (1ULL<<x);
    }
    
    intersecao = (a&b);
    cout << "intersecao ";
    for (int i=0; i<64; ++i){
        if (intersecao & (1ULL<<i)){
            cout << i << ' ';
        }
    }
    cout << endl;

    uniao = (a|b);
    cout << "uniao ";
    for (int i=0; i<64; ++i){
        if (uniao & (1ULL<<i)){
            cout << i << ' ';
        }
    }
    cout << endl;
    return 0;
}