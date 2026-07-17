/* Write a loop program to print the two-digit even numbers, who’s sum of digits are 6. */

#include<stdio.h>
int main(){
    int i,one,ten,sum;
    for(i=10;i<=100;i++){
        if(i%2==0){
            one=i%10;
            ten=(i/10)%10;
            sum=one+ten;
            if(sum==6){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}

