#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define all(x) (x).begin() , (x).end()
#define eb emplace_back
#define fs first
#define sc second
#define lsb(x) ((x)&-(x))

using namespace std;

int n,r[3][3],soma[3],menor;
string s;
char c[3]={'R','G','B'};
vi ans;

int main(){_
    cin >> n >> s;
    for (int i=0; i<n; ++i){
        if (s[i]=='R'){
            r[0][i%3]++;
            ++soma[0];
        }
        else if (s[i]=='G'){
            r[1][i%3]++;
            ++soma[1];
        }
        else{
            r[2][i%3]++;
            ++soma[2];
        }
    }
    menor = INF;
    for (int i=3; i--;){
        for (int j=3; j--;){
            if (j==i) continue;
            for (int k=3; k--;){
                if (k==i || k==j) continue;
                if (menor>(soma[0]-r[0][i]+soma[1]-r[1][j]+soma[2]-r[2][k])){
                    menor = (soma[0]-r[0][i]+soma[1]-r[1][j]+soma[2]-r[2][k]);
                    ans = {i,j,k};
                }
            }
        }
    }

    

    cout << menor << endl;
    for (int i=0; i<n; ++i){
        for (int j=3; j--;){
            if (i%3 == ans[j]){
                s[i] = c[j];
            }
        }
    }
    cout << s << endl;

    return 0;
}
