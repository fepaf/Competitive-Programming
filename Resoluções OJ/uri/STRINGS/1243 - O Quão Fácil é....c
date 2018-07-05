// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Quão Fácil é...
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1243

#include<stdio.h>
#include<string.h>
 
int main(){
    char s[101];
    int i,letra,digito,ponto,slen,qp,t,med;
 
    while (gets(s)){
        t=strlen(s);
 		
 		slen=letra=digito=ponto=qp=0;
        for (i=0;i<=t;i++){
            letra+=('a'<=s[i] && s[i]<='z' || 'A'<=s[i] && s[i]<='Z');
            ponto+=(s[i]=='.');
            digito+=('0'<=s[i] && s[i]<='9');
            if (s[i]==' ' || s[i]=='\0'){
 				if (!digito && letra && ((ponto==1 && s[i-1]=='.')||(!ponto))) slen+=letra,qp++;
 				letra=digito=ponto=0;
            }
        }
 
        //printf("\n%i %i\n",slen,qp);
        med=slen/(qp+(qp==0));
        if (med<=3) printf("250\n");
        else if (med==4 || med==5) printf("500\n");
        else printf("1000\n");
    }
 
    return 0;
}
