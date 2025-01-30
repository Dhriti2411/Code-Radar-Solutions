#include <stdio.h>

int main(){
    char name[50];
    int age;
    char hobby[50];
    scanf("%s%d%s",name, &age, hobby);
    scanf("%d",&age);
    print("\nName: %s\nAge: %d\nHobby: %s",name, age, hobby);
    return 0;
}