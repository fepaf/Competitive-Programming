// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lista de Chamada
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2381

#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
main (){
    int i,k,n;
    string nome[100];
 
    cin>>n>>k;
 
    for (i=0;i<n;i++) cin>>nome[i];
 
    sort(nome,nome+n);
 
    cout<<nome[k-1]<<endl;
 
    return 0;
}
 
 
