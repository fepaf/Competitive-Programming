#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123

using namespace std;

/*
Lê um número N e imprime o módulo dele por M
1 <= N <= 10**1000
1 <= M <= 10**9
*/

string n;
int m, x;

int main(){_
    while (cin >> n >> m){
        x = 0;
        for (int i = 0; i< (int)n.size(); ++i){
            x = 10 * x + (n[i]-'0');
        }
        cout << x << endl;
    }
    return 0;
}
