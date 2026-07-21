/* Write a program to get a number from user and print the reverse of that number
Testcase: 
Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576 */

#include<stdio.h>
int main(){
    int num,ones;
    printf("Get the number from the user:");
    scanf("%d",&num);
    while(num!=0){
        ones=num%10;
        num=num/10;
        printf("%d",ones);
    }
    return 0;
}

