// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Infixa para Posfixa
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1077

#include<bits/stdc++.h>
 
using namespace std;
 
int prio(int p){
    switch (p){
        case '(':
            return 1;
            break;
        case '+':
        case '-':
            return 2;
            break;
        case '*':
        case '/':
            return 3;
            break;
        case '^':
            return 4;       
    }
}
 
int main(){
    int n,pr;
    char c;
    stack <char> pilha;
     
    scanf("%i ",&n);
     
    while (n--){
        while ((c=getchar())!='\n'){
            switch(c){
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    pr=prio(c);
                    while (!pilha.empty() && prio(pilha.top())>=pr){
                        printf("%c",pilha.top());
                        pilha.pop();
                    }
                    pilha.push(c);
                    break;
                case ')':
                    while (pilha.top()!='('){
                        printf("%c",pilha.top());
                        pilha.pop();
                    }
                    pilha.pop();
                    break;
                case '(':
                    pilha.push(c);
                    break;
                default:
                    printf("%c",c);
            }
        }
        while (!pilha.empty()){
            printf("%c",pilha.top());
            pilha.pop();
        }
        printf("\n");
    }
     
    return 0;
}
