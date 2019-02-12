#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 200123
#define i64 long long
#define vi vector<int>
#define vvi vector<vi>
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define fs first
#define sc second
#define lsb(x) ((x)&-(x))

using namespace std;

int n, f[3];
string s;
vi pos[3];

int main(){_
    while (cin >> n >> s){
        f[0] = f[1] = f[2] = 0;

        pos[0].clear(); pos[1].clear(); pos[2].clear();

        for (int i=0; i<n; ++i){
            f[s[i]-'0']++;
            pos[s[i]-'0'].eb(i);
        }
        n/=3;

        for (int i=0; f[2]>n; i++){
            if (f[0] < n){
                s[pos[2][i]] = '0';
                --f[2];
                ++f[0];
            }
            else if (f[1] < n){
                s[pos[2][i]] = '1';
                --f[2];
                ++f[1];
            }
        }
        // cout << "for 1" << endl;

        for (int i =0, j = pos[1].size()-1; f[1]>n;){
            if (f[0] < n){
                s[pos[1][i]] = '0';
                --f[1];
                ++f[0];
                ++i;
            }
            else if (f[2] < n){
                s[pos[1][j]] = '2';
                --f[1];
                ++f[2];
                --j;
            }
        }
        // cout << "for 2" << endl;


        for (int i = pos[0].size()-1; f[0]>n; i--){
            if (f[2] < n){
                s[pos[0][i]] = '2';
                --f[0];
                ++f[2];
            }
            else if (f[1] < n){
                s[pos[0][i]] = '1';
                --f[0];
                ++f[1];
            }
        }

        cout << s << endl;
    }
    return 0;
}
