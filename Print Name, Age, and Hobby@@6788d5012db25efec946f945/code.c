#include <stdio.h>

int main(){
    char name[100];
    float age;
    char hobby[100];
    scanf("%s%s",&name,&hobby);
    scanf("%f",&age);
    print("Name: %s\nAge: %f\nHobby: %s",name,age,hobby);
}