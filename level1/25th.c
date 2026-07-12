/*Get a four-digit number from user and subtract 5 from that number if
ten’s digit position and 100’s digit position is same, then print the result.
Do not use “if”.
Input: 7595 Output 7595. 
Input: 3772 Output: 3767
*/

#include<stdio.h>
int main(){
    int num,tens,hun,res;
    printf("Get the four digit number from user:");
    scanf("%d",&num);
    tens=(num/10)%10;
    hun=(num/100)%10;
    res=tens==hun?num-5:num;
    printf("%d",res);
}
