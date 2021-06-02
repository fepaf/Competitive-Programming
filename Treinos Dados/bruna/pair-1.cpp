#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define fs first
#define sc second
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<ii>

using namespace std;

pair<int, int> par;

int main(){_
    cin >> par.first >> par.second;
    cout << par.first  << ' ' << par.second << endl;

    par = {6, -7};
    cout << par.first  << ' ' << par.second << endl;

    par.first = 9;
    par.second = 0;
    cout << par.first  << ' ' << par.second << endl;

    par.fs = 7;
    par.sc = -6;
    cout << par.fs  << ' ' << par.sc << endl;

    par = pair<int, int> (8,5);
    cout << par.fs  << ' ' << par.sc << endl;

    par = ii(8,5);
    cout << par.fs  << ' ' << par.sc << endl;

    par = {6, -7};
    cout << par.fs  << ' ' << par.sc << endl;
    
    return 0;
}
