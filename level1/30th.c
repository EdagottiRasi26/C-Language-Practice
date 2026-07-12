/*
Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is equal to 10, and one of the digits is more than 7 then
print “Success”, otherwise print “Failure”.

Input: 4649 – Output: Failure.
Input: 9286 - Output: Success.
*/

#include<stdio.h>
int main(){
    int num,ten,hun,res;
    printf("Get the 4 digit number from the user:");
    scanf("%d",&num);
    ten=(num/10)%10;
    hun=(num/100)%10;
    res=ten+hun;
    if((res==10)&&(hun>7)||(ten>7)){
      printf("Success");
    }else{
      printf("Failure");  
    }
}
