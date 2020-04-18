#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

int n, t, h, teste;
set<string> times[1<<10];
priority_queue< pair<int, string> > alunos;
string s;

int main(){_
    cin >> n >> t;
    while (n--){
        cin >> s >> h;
        alunos.push({h,s});
    }
    for (int i=0; !alunos.empty(); i=(i+1)%t){
        times[i].insert(alunos.top().sc);
        alunos.pop();
    }
    for (int i=0; i<t; ++i){
        cout << "Time " << i+1 << endl;
        for (string aluno : times[i]){
            cout << aluno << endl;
        }
        cout << endl;
    }
    return 0;
}
