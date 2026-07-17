/*  Write a loop program to print sum of 6 to 1. 
op: 21*/

#include<stdio.h>
int main(){
 int i,sum=0;
 for(i=6;i>=1;i--){
     sum=sum+i;
 }
     printf("sum=%d",sum);
     return 0;
}

