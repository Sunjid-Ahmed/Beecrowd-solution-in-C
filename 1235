#include <stdio.h>
#include <string.h>

int main()
{
	int N,i,j,len,meio;
	char codigo[102], decifrada[102];
	
	scanf("%d",&N);
	getchar();
	
	for(i=0; i<N; ++i)
		{
		fgets(codigo,102,stdin);
		
		len = strlen(codigo)-1;
		meio = len/2 + len%2;
		
		for(j = meio-1; j>=0; --j)
		{
			decifrada[meio-j-1] = codigo[j];
		}
		
		for(j=(len-1); j>= meio; --j)
		{
			decifrada[len-j-1+meio] = codigo[j];
		}
		decifrada[len]='\0';
		printf("%s\n",decifrada);
		}	
	
    return 0;
}
