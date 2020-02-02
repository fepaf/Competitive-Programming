#include<bits/stdc++.h>
#define MAXN 21234
#define _ ios_base::sync_with_stdio(0);
#define eb emplace_back
#define endl '\n'
using namespace std;

int n;
string s;

struct no{
    no *g[26];
    int end;
    no (){
        end = 0;
        for (int i=26; i--;) g[i] = NULL;
    }
};

no *root;
vector<string> ans;

void insere(string s){
    no *u = root;
    for (char c : s){
        c -= 'a';
        if (u->g[c] == NULL){
            u->g[c] = new no();
        }
        u = u->g[c];
    }
    u->end++;
    if (u->end>1 && s.size()>3){
        ans.eb(s);
    }
}
char c;
int t;

int main(){_
    cin >> n;;
    root = new no();
    no *u;
    for(int i=0;i<n;i++){
        u = root;
        cin >> s;
        t = s.size();
        for (int i=0; i<t; ++i){
            c = s[i]-'a';
            if (u->g[c] == NULL){
                u->g[c] = new no();
            }
            u = u->g[c];
        }
        u->end++;
        if (u->end>1 && s.size()>3){
            ans.eb(s);
        }
    }
    t = ans.size();
    if (t){
        cout << t << endl;
        for (int i=0; i<t; ++i){
            cout << ans[i] << endl;
        }
    }
    else {
        cout << "SAFO" << endl;
    }
    
    return 0;  
}