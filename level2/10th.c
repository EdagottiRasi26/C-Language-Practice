/* Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7. */

#include <stdio.h>
int main(){
    int i,ten, sum=0;
    for(i=10;i<=100;i++){
        ten=(i/10)%10;
        if(i%2!=0 && ten==7){
            sum=sum+i;
        }
    }
    printf("sum of two-digit odd numbers, whose ten’s digit is 7  is: %d",sum);
    return 0;
}
