// Write a loop program to print the two-digit odd numbers, below 20.

#include<stdio.h>
int main(){
    int i;
    for(i=10;i<=20;i++){
        if(i%2!=0){
            printf("2 digit odd numbers below is :%d\n",i);
        }
    }
    return 0;
}
