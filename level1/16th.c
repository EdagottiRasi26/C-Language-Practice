//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
// Input: 9561 Output 5961. Input: 3859 Output: 8359

#include <stdio.h>
int main(){
    int num,ones,tens,hunds,thus,rev;
    printf("Get the 4 digit number: ");
    scanf("%d",&num);
    ones=num%10; //9561%10=1
    tens=(num%100)/10; //9561%100=61 61/10=6
    hunds=(num%1000)/100; //9561%1000=561 561/100=5
    thus=num/1000; //9561/1000=9
    rev=(ones*1)+(tens*10)+(hunds*1000)+(thus*100); //1*10+6*1+5*100+9*1000 =9516
    printf("Result after reversing last 2 digits is:%d",rev);
    return 0;
}
