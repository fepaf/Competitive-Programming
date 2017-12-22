// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Catálogo de Livros
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1802

#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,k,ans;
vi p,m,f,q,b,v;

bool cmp(long a, long b){return a>b;}

int main(){_
	cin>>n;
	p = vi(n);
	for (int i=n;i--;){
		cin>>p[i];
	}
	cin>>n;
	m = vi(n);
	for (int i=n;i--;){
		cin>>m[i];
	}
	cin>>n;
	f = vi(n);
	for (int i=n;i--;){
		cin>>f[i];
	}
	cin>>n;
	q = vi(n);
	for (int i=n;i--;){
		cin>>q[i];
	}
	cin>>n;
	b = vi(n);
	for (int i=n;i--;){
		cin>>b[i];
	}
	for (int i1=p.size();i1--;){
		for (int i2=m.size();i2--;){
			for (int i3=f.size();i3--;){
				for (int i4=q.size();i4--;){
					for (int i5=b.size();i5--;){
						v.pb(p[i1]+m[i2]+f[i3]+q[i4]+b[i5]);
					}
				}
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
	cin>>k;
	for (int i=0;i<k;i++){ans+=v[i];}
	cout<<ans<<endl;
	return 0;
}
