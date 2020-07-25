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

int a, b, m;

int main(){_
    cin >> a >> b >> m;
    //limitada pelo dobro de M
    cout << (((a%m)-(b%m) + m)%m) << endl;
    return 0;        
}