#include<stdio.h>
#include <stdlib.h>

int main()   
{  

// printf içerisinde string göstermek istediğimizde %s , integer göstermek istediğimizde %d, float ya da double göstermek istediğimizde %f ile belirtiyoruz.
// single char için %c, tırnakları göstermek için tırnaktan önce \ kullanıyoruz
// pow ve sqrt methodları burada da var.    
// ceil() bir üst sayıya yuvarlar, floor() bir alt sayıya yuvarlar
// &variableName -> pointer


    char characterName[] = "John";
    int characterAge ;
    double gpa;

    printf("Enter your age: ");
    scanf("%d", &characterAge);

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);

    // fgets(name, 20, stdin) // ----> string almak için.

    printf("There once was a man named %s ! \n", characterName);
    printf("He was %d years old. \n", characterAge);
    printf("He really liked the name %s ! \n", characterName);
    printf("but he did not like being %d \n", characterAge);

    printf("Your gpa is %f", gpa);


    return 0; 
}   