#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define ii pair<int,int>
#define ll pair<i64,i64>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define f(x) ((x)>0 ? "positivo" : "negativo");

using namespace std;


vi v;
vii vp;

int n,y;


int main(){_
    while (cin>>n){
        v = vi(n);
        for (aut &x : v){
            cin>>x;
        }
        sort(v.begin(),v.end());
        for (auto x : v){
            cout<<x<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
