#include <stdio.h>
#include <stdlib.h>

#define MYCONSTANT "This is a constant value"

int main()
{
    int age;
    age = 27;
    printf("I have freaking %d years old \n", age);


    // an array with 14 bytes (need add one more byte to the terminator
    // I dont need to put the number of bytes if I assing the value here
    char name[14] = "Thomaz Aquino";
    printf("My name is %s \n", name);

    name[2] = 'a';
    printf("Now, My name is %s \n", name);

    char food[] = "tuna";

    // Method to change array, params: array, new value
    strcpy(food, "bacon");
    printf("Best food is %s \n", food);
    printf(MYCONSTANT);


    return 0;
}
