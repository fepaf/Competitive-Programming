// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Deli Deli
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1652

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

string s,pl,alf="abcdefghijklmnopqrstuvwxyz";
int l,n,t;
unordered_map <string,string> irg;

int main(){_
    while (cin>>l>>n){
        while (l--){
            cin>>s>>pl;
            irg[s]=pl;
        }
        while (n--){
            cin>>s;
            // cout<<"li "<<s<<endl;
            t = s.size();
            if (irg[s]!=""){
                cout<<irg[s]<<endl;
            }
            else {
                if (t>1){
                    if (s[t-1]=='y' && s[t-2]!='a' && s[t-2]!='e' && s[t-2]!='i' && s[t-2]!='o' && s[t-2]!='u'){
                        cout<<s.substr(0,t-1)+"ies"<<endl;
                    }
                    else if ((s[t-1]=='h' && (s[t-2]=='c' || s[t-2]=='s')) || s[t-1]=='o'  || s[t-1]=='s'  || s[t-1]=='x'){
                        cout<<s+"es"<<endl;
                    }
                    else {
                        cout<<s+"s"<<endl;
                    }
                }
                else if (s[t-1]=='o'  || s[t-1]=='s'  || s[t-1]=='x'){
                    cout<<s+"es"<<endl;
                }
                else {
                    cout<<s+"s"<<endl;
                }
            }
        }
        irg.clear();
    }
    return 0;
}

