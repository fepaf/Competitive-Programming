// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: CPF 2
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1786

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

string s;
int b1,b2,s1,s2;

int main(){_
    while (cin>>s){
        s1=s2=0;
        for (int i=1;i<=9;i++){
            s1+=(s[i-1]-'0')*i;
            s2+=(s[i-1]-'0')*(10-i);
        }
        b1=(s1%11)%10;
        b2=(s2%11)%10;
        cout<<s[0]<<s[1]<<s[2]<<'.';
        cout<<s[3]<<s[4]<<s[5]<<'.';
        cout<<s[6]<<s[7]<<s[8]<<'-';
        cout<<b1<<b2<<endl;
    }
    return 0;
}

