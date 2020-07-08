// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Animal
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1049

#include<bits/stdc++.h>
 
using namespace std;
 
string s1,s2,s3;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin>>s1>>s2>>s3;
    if ((s1=="vertebrado")&&(s2=="ave")&&(s3=="carnivoro")) cout<<"aguia"<<endl;
    if ((s1=="vertebrado")&&(s2=="ave")&&(s3=="onivoro")) cout<<"pomba"<<endl;
    if ((s1=="vertebrado")&&(s2=="mamifero")&&(s3=="onivoro")) cout<<"homem"<<endl;
    if ((s1=="vertebrado")&&(s2=="mamifero")&&(s3=="herbivoro")) cout<<"vaca"<<endl;
    if ((s1=="invertebrado")&&(s2=="inseto")&&(s3=="hematofago")) cout<<"pulga"<<endl;
    if ((s1=="invertebrado")&&(s2=="inseto")&&(s3=="herbivoro")) cout<<"lagarta"<<endl;
    if ((s1=="invertebrado")&&(s2=="anelideo")&&(s3=="hematofago")) cout<<"sanguessuga"<<endl;
    if ((s1=="invertebrado")&&(s2=="anelideo")&&(s3=="onivoro")) cout<<"minhoca"<<endl;
     
    return 0;
}
