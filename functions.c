//Return type'a sahip bir fonksiyonu main içerisinde kullanacaksak bunu ya main'in üstünde yazmamamız gerek ya da prototyping yapmamız gerek.


#include <stdio.h>
#include <stdlib.h>

//prototyping: (kotlindeki lateinit var'a benzer bir yapı.)

double cube(double num);

int main() {

    printf("Answer : %f", cube(3.0));

}

double cube(double num) {

    return num * num * num;
}