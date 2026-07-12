/* Get a three-digit number from user and subtract 5 from that number if
one’s digit number and 100’s digit number are same, then print the
result. Do not use “if”.

Input: 595 Output 590.
Input: 372 Output: 372
 */
 
 #include<stdio.h>
 int main(){
     int ones,hun,res,num;
     printf("Get the 3 digit number from user:");
     scanf("%d",&num);
     ones=num%10;
     hun=(num/100)%10;
     res=ones==hun?num-5:num;
     printf("%d",res);
 }
