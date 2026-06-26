/* Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”. 

*/

#include <stdio.h>
int main(){
    int num,res;
    printf("Get the number from user:");
    scanf("%d",&num);
    res= (num&1) ? (num-5) : num;
    printf("result is:%d",res);
    return 0;
}
