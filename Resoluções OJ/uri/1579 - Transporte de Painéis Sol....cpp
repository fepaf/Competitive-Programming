// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Transporte de Painéis Sol...
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1579

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 100123
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int n,c,f,t,lo,hi,mid,p[102],sum,big,used;

int main(){_
	for (cin>>t;t--;){
		cin>>n>>c>>f;
		big=sum=0;
		for (int i=0;i<n;i++){
			cin>>p[i];
			sum+=p[i];
			big=max(big,p[i]);
		}
		
		lo=big, hi=sum;
		while (lo<hi){
			mid=lo+(hi-lo)/2;
			used=1,sum=p[0];
			for (int i=1;i<n;i++){
				if (sum+p[i]>mid){
					sum=p[i];
					++used;
				}
				else sum+=p[i];
			}
			
			if (used<=c) hi=mid;
			else lo=mid+1;
		}
		cout<<lo<<" $"<<lo*c*f<<endl;
	}
    return 0;
}


