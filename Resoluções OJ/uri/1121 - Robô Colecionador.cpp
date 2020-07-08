// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Robô Colecionador
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1121

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

int n,m,s,di[]={0,-1,0,1},dj[]={-1,0,1,0},ipos,jpos,dir,ans;
char c,arena[1<<7][1<<7];

int main(){_
    while ((cin>>n>>m>>s)&&(n||m||s)){
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin>>arena[i][j];
                if (isalpha(arena[i][j])){
                    ipos = i , jpos = j;
                    switch (arena[i][j]){
                        case 'O':
                            dir = 0;
                            break;
                        case 'N':
                            dir = 1;
                            break;
                        case 'L':
                            dir = 2;
                            break;
                        case 'S':
                            dir = 3;
                            break;
                        default:
                            dir = dir;
                    }
                }
            }
        }
        ans = 0;
        while (s--){
            cin>>c;
            if (c=='F'){
                int a = ipos+di[dir] , b = jpos+dj[dir];
                if (arena[a][b]!='#' && 0<=a && a<n && 0<=b && b<m){
                    ipos = a , jpos = b;
                    if (arena[ipos][jpos]=='*') {
                        ans++;
                        arena[ipos][jpos]='.';
                    }
                }
            }
            else {
                dir = (dir + (c=='D' ? 1 : -1) + 4)%4;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

