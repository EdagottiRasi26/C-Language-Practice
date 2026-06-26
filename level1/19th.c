/* Get a three-digit number from user and make the one’s digit as 2, then print it.*/

#include <stdio.h>
int main(){
    int num,res;
    printf("Get the 3 digit number:");
    scanf("%d",&num);
    res=((num/10)*10)+2;
    printf("3 digit number after changing 1s digit to 2 is:%d",res);
    return 0;
}
