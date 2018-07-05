// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude Nhonho
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1919

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1002
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define vs vector<string>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

int a,b,c,d,e,k,t,exist,soma;

int main(){_
    for (cin>>t; t--;){
        cin>>k;
        exist = 1;
        exist &= (k%44444==0);
        if (exist){
            exist = 0;
            for (int a=0; a<10; a++){
                for (int b=a+1; b<10; b++){
                    for (int c=b+1; c<10; c++){
                        for (int d=c+1; d<10; d++){
                            for (int e=d+1; e<10; e++){
                                if ((a+b+c+d+e)*24*11111==k){
                                    cout<<"{"<<a<<","<<b<<","<<c<<","<<d<<","<<e<<"}"<<endl;
                                    exist = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (!exist){
                cout<<"impossivel"<<endl;
            }
        }
        else {
            cout<<"impossivel"<<endl;
        }
        cout<<endl;
    }
    return 0;
}

