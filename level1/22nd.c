/* Get a number from user and subtract 5 from that number if the number’s 
ten’s position digit is odd, then print the result. Do not use “if”.  

 Input: 685 Output 685. 
 Input: 89172 Output: 89167
 */
 
 #include <stdio.h>
 int main(){
     int num,res,tens;
     printf("Get the number:");
     scanf("%d",&num);
     tens=(num/10)%10;
     res=(tens & 1) ? (num-5) : num;
     printf("result is %d",res);
     return 0;
 }
