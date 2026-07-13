/*
Get a three-digit number from user.
If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum and print the sum.
Note: The result should be always single digit only.

TestCase :
Input: 123 – Output: 6
Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
*/

#include<stdio.h>
int main(){
    int num,one,ten,hun,res,soo,soh,res1;
    printf("Get the three digit number from user:");
    scanf("%d",&num);
    one=num%10;
    ten=(num/10)%10;
    hun=(num/100)%10;
    res=one+ten+hun;
    if(res<10){
        printf("%d",res);
    }else{
        if(res1>=10){
        soo=res%10;
        soh=(res/10)%10;
        res1=soo+soh;
        printf("%d ",res1);
        }
        else{
         printf("%d",res);
        }
    }
}
