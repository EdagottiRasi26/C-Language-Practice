/* 
Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
print the sum, otherwise print the difference.
TestCase:
Input: 56 78 – Output: 22
Input: 14 65 - Output: 79
*/

#include<stdio.h>
int main(){
    int num1, num2,res,res1;
    printf("Get the 2 digit numbers from the user:");
    scanf("%d\t%d",&num1,&num2);
    res=num1+num2;
    if(res<100){
        printf("%d",res);
    }else{
       res1=num2-num1;
       printf("%d",res1);
    }
}
    
