#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define vi vector<int>

using namespace std;

set<int> cjA, cjB;
int a, b, x, t;

int main(){_
    cin >> a >> b;
    for (int i=0; i<a; i++){
        cin >> x;
        cjA.insert(x);
    }
    for (int i=0; i<b; i++){
        cin >> x;
        cjB.insert(x);
    }

    for (int x : cjA){ //tirando repetidas
        if (cjB.count(x)){
            cjB.erase(x);
            cjA.erase(x);
        }
    }

    if (cjA.size() <= cjB.size()){
        cout << cjA.size() << endl;
    } else{
        cout << cjB.size() << endl;
    }


    return 0;
}