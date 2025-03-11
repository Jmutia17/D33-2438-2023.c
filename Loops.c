/*
Name: Jonathan Kavuvi Mutia 
Reg NO: D33-2438-2023
Unit code: BMS 201
Unit name: Computer programming 
*/

// Using for loop
#include<stdio.h>
int main(){
int i=1;
for (i = 1; i <= 100; i++) {
    printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
}

// Using while loop
while (i <= 100) {
    printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
    i++;
}

// Using do while loop
do {
    printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
    i++;
} while (i <= 100);
return 0;
}
