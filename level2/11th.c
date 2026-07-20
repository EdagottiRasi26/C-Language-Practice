/* Write a program to get a number from user print the total number of digits in that number */

#include<stdio.h>
int main(){
    int num,i,count=0;
    printf("Get the number from the user:");
    scanf("%d",&num);
    for(i=0;num!=0;i++){ //while(num!=0){
        num=num/10;
        count++;
    } 
    printf("%d",count);
    return 0;
}
