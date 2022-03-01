#include<stdio.h>

int total(int a, int b, int c){
    return a+b+c;
}

float percentage(int a, int b, int c){
    return ((a+b+c)/300.0)*100;
}

int main(){
    int marks1, marks2, marks3;
    printf("enter the marks of 1st subject: ");
    scanf("%d", &marks1);
    printf("enter the marks of 2nd subject: ");
    scanf("%d", &marks2);
    printf("enter the marks of 3rd subject: ");
    scanf("%d", &marks3);
    printf("total of all three marks is: %d\n", total(marks1, marks2, marks3));
    printf("percentage of all three marks is: %f\n", percentage(marks1, marks2, marks3));

    return 0;
}