// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Compras em FdI
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2531

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD int(10e9)+7
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
#define vd vector<double>
#define fs first
#define sc second
#define MAXN 100001
#define OUT -100
using namespace std;

int tree[4*MAXN], a[MAXN], tree2[4*MAXN], op;

int mid(int x, int y){return ((x+y) >> 1);}
int left(int x){return (x << 1);}
int right(int x){return (x << 1) + 1;}


int operacao(int i, int j){
	return (a[i] == max(a[i],a[j]) ? i : j);
}

int build(int u, int i, int j){
	if (i == j) return tree[u] = i;
	build(left(u), i, mid(i, j));
	build(right(u), mid(i, j)+1, j);
	return tree[u] = operacao(tree[left(u)],tree[right(u)]);

}

int query(int u, int i, int j, int l, int r){

	if (r < i || j < l) return OUT;
	if (l <= i && j <= r) return tree[u];

	int lans = query(left(u), i, mid(i, j), l, r);
	int rans = query(right(u), mid(i, j)+1, j, l, r);

	if (lans == OUT) return rans;
	if (rans == OUT) return lans;

	return operacao(lans,rans);

}

int update(int u, int i, int j, int idx, int val){
	if (idx < i || j < idx) return OUT;

	if (i == j){
		a[i]=val;
		return tree[u];
	}

	update(left(u), i, mid(i, j), idx, val);
	update(right(u), mid(i, j)+1, j, idx, val);

	return tree[u] = operacao(tree[left(u)], tree[right(u)]);
}


int operacao2(int i, int j){
	return (a[i] == min(a[i],a[j]) ? i : j);
}

int build2(int u, int i, int j){
	if (i == j) return tree2[u] = i;
	build2(left(u), i, mid(i, j));
	build2(right(u), mid(i, j)+1, j);
	return tree2[u] = operacao2(tree2[left(u)],tree2[right(u)]);
}

int query2(int u, int i, int j, int l, int r){

	if (r < i || j < l) return OUT;
	if (l <= i && j <= r) return tree2[u];

	int lans = query2(left(u), i, mid(i, j), l, r);
	int rans = query2(right(u), mid(i, j)+1, j, l, r);

	if (lans == OUT) return rans;
	if (rans == OUT) return lans;

	return operacao2(lans,rans);

}

int update2(int u, int i, int j, int idx, int val){
	if (idx < i || j < idx) return OUT;

	if (i == j){
		a[i]=val;
		return tree2[u];
	}

	update2(left(u), i, mid(i, j), idx, val);
	update2(right(u), mid(i, j)+1, j, idx, val);

	return tree2[u] = operacao2(tree2[left(u)], tree2[right(u)]);
}


int n,q,i,x,y;

int main(){_
	while ((scanf("%i",&n))!=EOF){
  	for (i=0;i<n;i++){
  		scanf("%i",&a[i]);
  	}
  	build(1,0,n-1);
    build2(1,0,n-1);
  	scanf("%i",&q);
  	while (q--){
		scanf("%i %i %i",&op,&x,&y);
      if (op==1){
        update(1,0,n-1,x-1,y);
        update2(1,0,n-1,x-1,y);
      }
      else{
        printf("%i\n", (a[query(1,0,n-1,x-1,y-1)]-a[query2(1,0,n-1,x-1,y-1)]));
      }
  	}
  }
	return 0;
}

