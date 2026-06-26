/* Get a two-digit number from user and make the ten’s digit 1, then print it.
Input: 95 Output 15. 
Input: 82 Output: 12
 */
 
 #include <stdio.h>
 int main(){
     int num,res;
     printf("Get the 2 digit number:");
     scanf("%d",&num);
     res=(num%10)+10;
     printf("2 digit number after making tens digit as 1 is:%d",res);
     return 0;
 }
