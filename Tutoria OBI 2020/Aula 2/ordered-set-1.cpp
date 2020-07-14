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

#include<ext/pb_ds/assoc_container.hpp>//
#include<ext/pb_ds/tree_policy.hpp>//
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>//

using namespace __gnu_pbds;//
using namespace std;

ordered_set cj;
int n, x, k;

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> x;
        cj.insert(x);
    }
    // for (it = cj.begin(); it != cj.end(); it++){
    //     x = (*it);
    //     cout << x << endl;
    // }
    while ((cin >> k) && (k!=-1)){
        cout << (*cj.find_by_order(k)) << endl; //exclusivo do ordered set, 0-indexado
    }
    return 0;        
}