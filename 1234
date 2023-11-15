#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,j,l;
    while(gets(ch) != NULL){
        j=0;
        l=strlen(ch);
        for(i = 0;i < l;i++){
            if(ch[i]!=' '){
               j++;
               if(ch[i]>96 && j%2==1)ch[i]-=32;
               else if(ch[i]<96 && j%2==0)ch[i]+=32;
            }
        }
        ch[l]='\0';
        printf("%s\n",ch);
    }
    return 0;
}
