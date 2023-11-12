#include<stdio.h>

int main()
{
    char inp1[10],inp2[10];
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s %s", inp1, inp2);
        if(inp1[1]=='t'){
                if(inp2[1]=='e' || inp2[1]=='a')printf("Jogador 1 venceu\n");
                else printf("Aniquilacao mutua\n");
            }
        else if(inp1[1]=='e'){
                if(inp2[1]=='a')printf("Jogador 1 venceu\n");
                else if(inp2[1]=='e')printf("Sem ganhador\n");
                else printf("Jogador 2 venceu\n");
            }
        else if(inp1[1]=='a'){
                if(inp2[1]=='a')printf("Ambos venceram\n");
                else printf("Jogador 2 venceu\n");
            }
    }

    return 0;
}
