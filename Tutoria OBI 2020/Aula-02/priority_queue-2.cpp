#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;

priority_queue<int, vi, greater<int> > pq; //min heap, ou seja, menor no topo
int n, x, y;


int main(){_
    cin >> n;
    // priority_queue<int> pq;
    for (int i=n; i--;){
        cin >> x;
        pq.push(x);
    }
    while (!pq.empty()){
        x = pq.top(); pq.pop();
        cout << x << endl;
    }

    while(!pq.empty()) {
        pq.pop();
    }
    return 0;        
}