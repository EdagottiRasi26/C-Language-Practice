/* Get two 3-digit numbers from user.
Add the one’s digit and hundred’s digit of both the numbers. 
Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.

Input: 856 978 – Output: 24
Input: 128 365 - Output: 11

*/

#include<stdio.h>
int main(){
    int num,num1,one,ones,ten,tens,hun,huns,res,res1,res2,res3;
    printf("Get the 3 digit numbers from the user:");
    scanf("%d %d",&num1,&num);
    one=num%10;
    ten=(num/10)%10;
    hun=(num/100)%10;
    ones=num1%10;
    tens=(num1/10)%10;
    huns=(num1/100)%10;
    res=one+hun;
    res1=ones+huns;
    if(res>res1){
        res2=(one+ten+hun);
        printf("%d",res2);
    }else{
        res3=(ones+tens+huns);
        printf("%d",res3);
    }
}
