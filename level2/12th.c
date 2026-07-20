/* Write a program to get a number from user and print the sum of all digits.
Testcase : 
Input: 123456 - Output – 21
Input: 76895439 - Output – 51
Input: 675 – Output - 18
 */
 
 #include <stdio.h>
 int main(){
     int num,sum=0,one;
     printf("Get the number from the user:");
     scanf("%d",&num);
     while(num!=0){
         one=num%10;// will help in getting last digit
         sum=sum+one;//adding sumwith the ones digit
         num=num/10;//will help to remove the last digit
     }
     printf("%d",sum);
     return 0;
 }
