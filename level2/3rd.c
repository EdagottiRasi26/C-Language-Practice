// Write a loop program to print sum of 1 to 5.
//op:15

#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=5;i++){
        sum = sum + i;
    }
        printf("sum:%d",sum);
return 0;
}
