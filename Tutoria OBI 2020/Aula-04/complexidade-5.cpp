#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

/*
complexidade logaritmica
*/
int n, m, ans;

int main(){_
    cin >> n;
    //decomposição dos dígitos de um número para fazer algo
    while (n){
        ans += (n%10);
        n /= 10;
    }
    cout << ans << endl; //soma dos dígitos
    return 0;
}
