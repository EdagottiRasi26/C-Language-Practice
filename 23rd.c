/* Get a two digit number from user and subtract 5 from that number if the
sum of the digits of the number is odd, then print the result. Do not use
“if”.

Input: 95 Output 95. Input: 72 Output: 67
*/

#include<stdio.h>
int main(){
    
    int num,ones,tens,sum,res;
    printf("Get the number from user:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num/10)%10;
    sum=ones+tens;
    res=(sum%2==0)?num:num-5;
    printf("Result after subtracting 5 from the odd sum of two digit number is:%d",res);
}
