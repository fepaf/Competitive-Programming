#include<stdio.h>

char s[1<<5];
int n,d,i;

int main(){
	while (scanf("%d",&n)!=EOF){
		while (n--){
			scanf("%s",s);
			d = 0;
			for (i=0; s[i]; ++i){
				d = (d<<1)+s[i]-'0';
			}
			printf("%c",d);
		}
		printf("\n");
	}
	return 0;
}