#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define f(x) ((x)>0 ? "positivo" : "negativo");

using namespace std;


vi v;
vii vp;

int n,x,y;

int main(){_
    while (cin>>n){
        v = vi(n);
        for (int i=0;i<n;i++){
            cin>>x;
            vp.eb(x);
        }
        for (int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
