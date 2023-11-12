#include <stdio.h>
#include <string.h>

int contachar(char str[], char c){
    int i, t;
    for(i=t=0; str[i]!='\0'; i++)
        t += (str[i] == c);
    return t;
}

int maiorFreq(char s[]){
    int i, m, t;
    for(i=m=0; i<26; i++){
        t = contachar(s, 'a'+i);
        if(t>m) m = t;
    }
    return m;
}

void frenquenciaLetras(char s[]){
    int m, i;
    for(i=0; s[i]; i++)
        if(s[i]>=65 && s[i]<=90) s[i] += 32;
    m = maiorFreq(s);
    for(i=0; i<26; i++)
        if(m == contachar(s, 'a'+i))
            printf("%c", 'a'+i);
    printf("\n");
}

int main(){
    int n; char s[201];
    scanf("%d%*c", &n);
    while(n--){
        scanf("%[^\n]%*c", s);
        frenquenciaLetras(s);
    }

    return 0;
}
