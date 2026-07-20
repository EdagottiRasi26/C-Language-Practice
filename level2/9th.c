/* Write a loop program to print the sum of two-digit numbers whose one’s digit is 5. */

#include<stdio.h>
int main(){
    int i,one,sum=0;
    for(i=10;i<=100;i++){
      one=i%10;
      if(one==5){
          sum=sum+i;
      }
    }
    printf("%d",sum);
    return 0;
}
