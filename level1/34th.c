/* Get two 3-digit numbers from user. Print the difference between the one’s digit and
hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s
digit.
TestCase : 
Input: 856 978 – Output: 1
Input: 128 365 - Output: 2
*/

#include<stdio.h>
int main(){
    int num1,num2,one,ones,ten,tens,hun,huns,res,res1;
    printf("Get the 3 digit numbers from the user:");
    scanf("%d %d",&num1,&num2);
    one=num1%10;
    ten=(num1/10)%10;
    hun=(num1/100)%10;
    ones=num2%10;
    tens=(num2/10)%10;
    huns=(num2/100)%10;
    res=ones-huns;
    if(tens>ten){
    if(huns>ones){
    res1=huns-ones;
    printf("%d",res1);
    }else{
        printf("%d",res);
    }
    }
}
