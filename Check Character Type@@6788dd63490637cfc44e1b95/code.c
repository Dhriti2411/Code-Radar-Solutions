#include <stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    if (n=='a','e','i','o','u','A','E','I','O','U'){
        printf("Vowel");
    }
    else if ((n>='A' && n<= 'Z') || (n>='a' && n<= 'z') && (n!='a','e','i','o','u','A','E','I','O','U')){
        printf("Consonant");
    }
}