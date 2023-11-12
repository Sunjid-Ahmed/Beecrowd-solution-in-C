#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    char ch[10],ch1[10];
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        scanf("%s %s",&ch, &ch1);
        if(!strcmp(ch, ch1))printf("Caso #%d: De novo!\n",i);
        else if(!strcmp(ch, "lagarto")){
            if(!strcmp(ch1, "Spock") || !strcmp(ch1, "papel"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch1, "tesoura") || !strcmp(ch1, "pedra"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch, "tesoura")){
            if(!strcmp(ch1, "lagarto") || !strcmp(ch1, "papel"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch1, "Spock") || !strcmp(ch1, "pedra"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch, "papel")){
            if(!strcmp(ch1, "Spock") || !strcmp(ch1, "pedra"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch1, "lagarto") || !strcmp(ch1, "tesoura"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch, "Spock")){
            if(!strcmp(ch1, "tesoura") || !strcmp(ch1, "pedra"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch1, "lagarto") || !strcmp(ch1, "papel"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(ch, "pedra")){
            if(!strcmp(ch1, "tesoura") || !strcmp(ch1, "lagarto"))printf("Caso #%d: Bazinga!\n",i);
            else if(!strcmp(ch1, "Spock") || !strcmp(ch1, "papel"))printf("Caso #%d: Raj trapaceou!\n",i);
        }
    }
    return 0;
}
