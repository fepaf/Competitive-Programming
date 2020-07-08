// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Turma do JB6
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2626

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

map <string, int> score;
string d,l,p;

 int main(){_
     score["pedra"]=0;
     score["papel"]=1;
     score["tesoura"]=2;
     while (cin>>d>>l>>p){
         if (score[d]==(score[l]+1)%3 && score[l]==score[p]){
             cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria..."<<endl;
         }
         else if (score[p]==(score[l]+1)%3 && score[l]==score[d]){
             cout<<"Urano perdeu algo muito precioso..."<<endl;
         }
         else if (score[l]==(score[p]+1)%3 && score[p]==score[d]){
             cout<<"Iron Maiden\'s gonna get you, no matter how far!"<<endl;// olha a merda da aspa simples ali!
         }
         else {
             cout<<"Putz vei, o Leo ta demorando muito pra jogar..."<<endl;
         }
     }
     return 0;
 }

