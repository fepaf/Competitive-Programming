// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tradutor do Papai Noel
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1763

#include<bits/stdc++.h>
  
using namespace std;
  
int main(){
    map <string,string> fala;
    string pais;
      
    fala["brasil"]="Feliz Natal!";
    fala["alemanha"]="Frohliche Weihnachten!";
    fala["austria"]="Frohe Weihnacht!";
    fala["coreia"]="Chuk Sung Tan!";
    fala["espanha"]="Feliz Navidad!";
    fala["grecia"]="Kala Christougena!";
    fala["estados-unidos"]="Merry Christmas!";
    fala["inglaterra"]="Merry Christmas!";
    fala["australia"]="Merry Christmas!";
    fala["portugal"]="Feliz Natal!";
    fala["suecia"]="God Jul!";
    fala["turquia"]="Mutlu Noeller";
    fala["argentina"]="Feliz Navidad!";
    fala["chile"]="Feliz Navidad!";
    fala["mexico"]="Feliz Navidad!";
    fala["antardida"]="Merry Christmas!";
    fala["canada"]="Merry Christmas!";
    fala["irlanda"]="Nollaig Shona Dhuit!";
    fala["belgica"]="Zalig Kerstfeest!";
    fala["italia"]="Buon Natale!";
    fala["libia"]="Buon Natale!";
    fala["siria"]="Milad Mubarak!";
    fala["marrocos"]="Milad Mubarak!";
    fala["japao"]="Merii Kurisumasu!";
      
    while (getline(cin,pais)){
        if (fala.find(pais)==fala.end()) printf("--- NOT FOUND ---\n");
        else printf("%s\n",fala[pais].c_str());
    }
      
    return 0;
}
