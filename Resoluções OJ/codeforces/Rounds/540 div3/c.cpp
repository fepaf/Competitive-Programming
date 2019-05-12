d#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define endl '\n'
#define INF 0x3f3f3f3f
#define VISITED 1
#define UNVISITED -1
#define MAX (1<<20)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;



int n,a[MAX],tam,f_odd,f2,f4,all4,v,freq,m[1<<5][1<<5],i,j,pos,odd;
unordered_map<int,int> f;
vi r2,r4;

int main(){_
    while (cin >> n){

        //leitura
        for (i=0; i<n*n; ++i){
            cin >> a[i];
            ++f[a[i]];
        }

        f_odd = f2 = f4 = 0;
        all4 = 1;
        for (auto vf : f){
            v = vf.fs , freq = vf.sc;

            if (freq&1){
                ++f_odd;
                odd = v;
            }

            if (freq%4==2){
                ++f2;
                r2.eb(v);
            }
            else if (freq%4==0){
                r4.eb(v);
            }

            all4 &= (freq%4==0);
        }

        if (n&1){
            if ((f_odd==1) && (f2 <= ((n>>1)<<1))){
                cout << "YES" << endl;
                memset(m,-1,sizeof(m));

                //coloca a posição central
                m[(n>>1)+1][(n>>1)+1] = odd;
                --f[odd];

                //coloca os frequencia 4
                pos = 0;
                for (i=0; i<(n>>1); ++i){
                    for (j=0; j<(n>>1); ++j){
                        m[i][j] = m[i][n-1-j] = m[n-1-i][n-1-j] = m[n-1-i][j] = r4[pos];
                        f[r4[pos]] -= 4;
                        pos += (f[r4[pos]] == 0);
                    }
                }

                //coloca os frequencia 4 que sobraram na cruz
                tam = sz(r4);
                for (i=0; i<(n>>1) && pos<tam; ++i){
                    m[i][(n>>1)+1] = m[n-1-i][(n>>1)+1] = m[(n>>1)+1][i] = m[(n>>1)+1][n-1-i] = r4[pos];
                    f[r4[pos]] -= 4;
                    pos += (f[r4[pos]] == 0);
                }

                //coloca os frequencia 2 na barra vertical da cruz
                tam = sz(r2);
                pos = 0;
                for (i=0; i<(n>>1) && pos<tam; ++i){
                    if (m[i][(n>>1)+1] == -1){
                        m[i][(n>>1)+1] = m[n-1-i][(n>>1)+1] = r2[pos];
                        f[r2[pos]] -= 2;
                        pos += (f[r2[pos]] == 0);
                    }
                }

                //coloca os frequencias 2 na barra horizontal da cruz
                for (i=0; i<(n>>1) && pos<tam; ++i){
                    if (m[(n>>1)+1][i] == -1){
                        m[(n>>1)+1][i] = m[(n>>1)+1][n-1-i] = r2[pos];
                        f[r2[pos]] -= 2;
                        pos += (f[r2[pos]] == 0);
                    }
                }

                //preecnhe as posições restantes com o frequencia impar
                for (i=0; i<n; ++i){
                    for (j=0; j<n; ++j){
                        m[i][j] = (m[i][j] == -1 ? odd : m[i][j]);
                    }
                }

                //mostra
                for (i=0; i<n; ++i){
                    for (j=0; j<n; ++j){
                        cout << m[i][j] << ' ';
                    }
                    cout << endl;
                }

            }
            else {
                cout << "NO" << endl;
            }

        }
        else{
            if (all4){
                cout << "YES" << endl;

                pos = 0;
                for (auto vf : f){
                    v = vf.fs , freq = vf.sc;
                    while (freq){
                        i = (pos/(n>>1)) , j = (pos%(n>>1));
                        m[i][j] = m[i][n-1-j] = m[n-1-i][n-1-j] = m[n-1-i][j] = v;
                        freq -= 4;
                        ++pos;
                    }
                }

                for (i=0; i<n; ++i){
                    for (j=0; j<n; ++j){
                        cout << m[i][j] << ' ';
                    }
                    cout << endl;
                }
            }
            else {
                cout << "NO" << endl;
            }

        }

        f.clear();
    }

	return 0;
}
