// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Notas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2469

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int n,f[101],x,menor,i;
     
    int main(){
    	ios_base::sync_with_stdio(false);
    	cin>>n;
    	while (n--){
    		cin>>x;
    		f[x]++;
    	}
    	menor=x;
    	for (i=0;i<101;i++) if (f[i]>=f[menor] && f[i]) menor=i;
    	cout<<menor<<endl;
        return 0;
    } 
