#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define ii pair<int,int>
#define fs first
#define sc second
#define eb emplace_back
#define ALL(x) (x).begin() , (x).end()

using namespace std;//

int x, y, n, op;
priority_queue<ii, vector<ii>, greater<ii> > pq;// sempre tira o menor par

int main(){_
    while (cin>>n){
        while (n--){
            cin>>op;
            if (op==1){
                cin>>x>>y;
                pq.push(ii(x, y));//coloca na pq
            }
            else{
                if (!pq.empty()){
                    ii par = pq.top(); pq.pop();
                    cout<<"->"<<(par.fs)<<" - "<<(par.sc)<<endl;
                }
                cout<<"tamanho: "<<pq.size()<<endl;
            }
        }
    }
    return 0;
}
