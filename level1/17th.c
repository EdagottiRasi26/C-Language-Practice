/* Get a two-digit number from user and make the one’s digit as 0, then print it. 
Input: 95 Output 90. 
Input: 18 Output: 10
*/

#include <stdio.h>
int main(){
    int num,res;
    printf("Get the 2 digit number from user:");
    scanf("%d",&num);
    res=(num/10)*10;
    printf("2 digit number after making ones digit zero is:%d",res);
    return 0;
}
