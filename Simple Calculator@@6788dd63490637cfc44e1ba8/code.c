#include <stdio.h>
int main(){
    char op;
    int a,b;
    scanf("%d%d",&a,&b);
    scanf("%c",&op);
    if(op=='+'){
        printf("%d", a+b);
    }
    else if(op=='-'){
        printf("%d", a-b);
    }
   
    
}