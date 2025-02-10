#include <stdio.h>
int main(){
    char op;
    int a,b;
    scanf("%d%d%c",&a,&b,&op);
    if(op =='+'){
        printf("%d%d", a+b);
    }
}