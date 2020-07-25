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

int m, r;
string n;

int main(){_
    cin >> n >> m;
    for (char c : n){
        int d = c-'0';
        r= (10*r + d)%m;
    }
    cout << r << endl;
    return 0;        
}