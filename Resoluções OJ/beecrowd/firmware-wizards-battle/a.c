#include<stdio.h>
#include<string.h>
#define MAX (1<<10)
#define MOD 1000000007 

int n;
char s[1<<5];

int main(){
    while (scanf("%d",&n)!=EOF){
        while (n--){
            scanf("%s",s);
            if (strlen(s)==3 && ((s[0]=='O' && s[1]=='B')||(s[0]=='U' && s[1]=='R'))){
                if (s[0]=='O' && s[1]=='B') printf("OBI");
                else if (s[0]=='U' && s[1]=='R') printf("URI");
                else printf("%s",s);
            } else {
                printf("%s",s);
            }
            if (n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}