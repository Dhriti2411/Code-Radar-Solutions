#include <stdio.h>

int main(){
    int cost,sell;
    scanf("%d%d",&cost,&sell);
    if(sell>cost){
        printf("Profit");
    }
    if(cost>sell){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}