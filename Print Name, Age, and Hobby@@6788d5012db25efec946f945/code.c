#include <stdio.h>

int main(){
    char name[50];
    float age;
    char hobby[50];
    scanf("%s%f%s",name, &age, hobby);
    scanf("%f",&age);
    print("\nName: %s\nAge: %f\nHobby: %s",name, age, hobby);
    return 0;
}