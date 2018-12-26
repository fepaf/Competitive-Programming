#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

string keylog;
int t,tam_d,tam_e;
char c,dir[1000100],esq[1000100];

int main(){_
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> keylog;
        tam_d = tam_e = 0;
        for (int i=0; keylog.c_str()[i]; ++i){
            c = keylog.c_str()[i];
            if (c=='<' && tam_d){
                esq[tam_e++] = dir[--tam_d];
            }
            else if (c=='>' && tam_e){
                dir[tam_d++] = esq[--tam_e];
            }
            else if (c=='-' && tam_d){
                --tam_d;
            }
            else if (c!='>' && c!='<' && c!='-'){
                dir[tam_d++] = c;
            }
        }
        for (int i=0; i<tam_d; ++i){
            cout << dir[i];
        }
        for (int i=tam_e-1; i>=0; --i){
            cout << esq[i];
        }
        cout << endl;
    }
    return 0;
}
