#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define ii pair<int,int>
#define ll pair<i64,i64>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define vvii vector<vii>
#define fs first
#define sc second
#define eb emplace_back

using namespace std;

int n,x,m;
string s;
map<string,int> id;//ordenado
map<string,int>::iterator it;

int main(){_
    while (cin>>n>>m){
        id["ruiz"]=9;
        for (int i=n;i--;){
            cin>>s>>x;
            id[s]=x;
        }
        while (m--){
            cin>>s;
            if (id.find(s)!=id.end()){
                cout<<id[s]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        cout<<"MAP"<<endl;
/*        for (it=id.begin(); it!=id.end(); it++){
            cout<<(it->first)<<" "<<(it->second)<<endl;
        }*/
        for (auto p : id){
            cout<<p.fs<<" "<<p.sc<<endl;
        }
        id.clear();
    }
    return 0;
}
