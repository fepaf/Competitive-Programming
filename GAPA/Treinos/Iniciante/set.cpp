#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define si pair<int,string>
#define vsi vector<si>
#define vi vector<int>
#define fs first
#define sc second
#define eb emplace_back
#define ALL(x) (x).begin() , (x).end()

using namespace std;

//

int x, n;
set<int , greater<int> > cj;//crescente

int main(){_
    while (cin>>n){
        while (n--){
            cin>>x;
            cj.insert(x);
        }
        cout<<"tamanho : "<<cj.size()<<endl;
        for (auto x : cj){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
