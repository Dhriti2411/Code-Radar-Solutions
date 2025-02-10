#include <stdio.h>
int main(){
    char op;
    float a,b;
    scanf("%f%f%c",&a,&b,&op);
    if(op =='+'){
        printf(".%2f", a+b);
    }
}