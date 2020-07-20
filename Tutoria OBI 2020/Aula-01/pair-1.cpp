#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define vi vector<int>
#define all(x) (x).begin(), (x).end()

using namespace std;

pair<int, int> par;
vi v;
int n, x, m;

int main(){_
    cin >> n >> m;

    par = {n,m};

    cout << par.first << " " << par.second << endl;

    return 0;
}