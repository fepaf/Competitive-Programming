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

int x, n, op;
priority_queue<int, greater<int> > pq;

int main(){_
    while (cin>>n){
        while (n--){
            cin>>op;
            if (op==1){
                cin>>x;
                pq.push(x);//coloca na pq
            }
            else{
                if (!pq.empty()){
                    cout<<"->"<<pq.top()<<endl;
                    pq.pop();
                }
                cout<<"tamaho: "<<pq.size()<<endl;
            }
        }
    }
    return 0;
}
