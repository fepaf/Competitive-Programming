// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ano Bissexto ou Ano não B...
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1279

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string year;
int r4,r100,r400,r15,r55,leap,i,t;

int main(){
    while (cin>>year){
        for (r4=r100=r400=r15=r55=i=0;i<year.length();i++){
            r4=((2*r4)%4+(year[i]-'0')%4)%4;
            r15=((10*r15)%15+(year[i]-'0')%15)%15;
            r55=((10*r55)%55+(year[i]-'0')%55)%55;
            r100=((10*r100)%100+(year[i]-'0')%100)%100;
            r400=((10*r400)%400+(year[i]-'0')%400)%400;
        }
        if (t++) cout<<endl;
        leap=((!r4 && r100)||(!r400));
        if (leap){
            cout<<"This is leap year."<<endl;
            if (!r15) cout<<"This is huluculu festival year."<<endl;
            if (!r55) cout<<"This is bulukulu festival year."<<endl;
        }
        else if (!r15) cout<<"This is huluculu festival year."<<endl;
        else cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}

