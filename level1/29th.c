/*
Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is greater than 10, then print “Success”, otherwise print
“Failure”.
Input: 7529 – Output: Failure. 
Input: 9386 - Output: Success.
*/

#include<stdio.h>
int main(){
    int num,ten,hun,res;
    printf("Get the 4 digit number from user:");
    scanf("%d",&num);
    ten=(num/10)%10;
    hun=(num/100)%10;
    res=ten+hun;
    if(res>10){
        printf("Success");
    }else{
        printf("Failure");
    }
}

