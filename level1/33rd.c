/*
Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Input: 56 78 – Output: 15
Input: 14 65 - Output: 11
*/

#include<stdio.h>
int main(){
    int num1,num2,one,ten,ones,tens,res,res1;
    printf("Get the 2 digit numbers from user:");
    scanf("%d %d",&num1,&num2);
    one=num1%10;
    ten=(num1/10)%10;
    res=one+ten;
    ones=num2%10;
    tens=(num2/10)%10;
    res1=ones+tens;
    if(res>res1){
        printf("%d",res);
    }else{
        printf("%d",res1);
    }
}
