#include<stdio.h>
#include<string.h>
int main()
{
    char A[101] ,B[101] ,C[101];
    int i ;
    
    gets(A);
    gets(B);
    gets(C);
    printf("%s%s%s\n",A,B,C);
    printf("%s%s%s\n",B,C,A);
    printf("%s%s%s\n",C,A,B);

    for ( i = 0; i < 10 && A[i]!='\0'; i++)
    {
    printf("%c",A[i]);
    }
    for ( i = 0; i < 10 && B[i]!='\0'; i++)
    {
    printf("%c",B[i]);
    }
    for ( i = 0; i < 10 && C[i]!='\0'; i++)
    {
    printf("%c",C[i]);
    }
    printf("\n");
     return 0;
}
