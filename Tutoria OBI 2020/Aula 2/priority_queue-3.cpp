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

priority_queue<ii, vii, greater<ii> > pq; //min heap, ou seja, menor no topo
// priority_queue<ii> pq; 
int n, x, y;


int main(){_
    cin >> n;
    // priority_queue<int> pq;
    for (int i=n; i--;){
        cin >> x >> y;
        pq.push({x,y});
    }
    while (!pq.empty()){
        x = pq.top().fs; 
        y = pq.top().sc; 
        pq.pop();
        cout << x << " " << y << endl;
    }

    while(!pq.empty()) {
        pq.pop();
    }
    return 0;        
}