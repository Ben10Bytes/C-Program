#include<stdio.h>
int main(){
    float marks1 = 71; //Hindi
    float marks2 = 95; //Math
    float marks3 = 85; //Physics
    float marks4 = 90; //Chemistry
    float marks5 = 91; //Social Science
    float percentage = (marks1 + marks2 + marks3 + marks4 + marks5)/5;
    printf("Percentage of all subjects : %f",percentage);
    return 0;
}