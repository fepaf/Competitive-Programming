#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second

/*Recebe N pares (A,B) e ordena decrecesnte por A, desempate descrecente por B*/

using namespace std;

priority_queue<ii> pq;
string cmd;
int a, b, n;

int main(){
    cin >> n;
    while (n--){
        cin >> a >> b;
        pq.push({a, b});
    }
    while (!pq.empty()){
        ii top = pq.top(); pq.pop();
        a = top.fs, b = top.sc;
        cout << a << " " << b << endl;
    }
    return 0;
}