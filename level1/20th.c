/* Get a three-digit number from user and make the ten’s digit as 0, then print it. 
Input: 695 Output 605. 
Input: 182 Output: 102
*/

#include <stdio.h>
int main(){
    int num,ones,tens,hun,res;
    printf("Get the 3 digits number:");
    scanf("%d",&num);
    ones=num%10;
    tens=(num%100)/10;
    hun=num/100;
    res=(hun*100)+(tens*0)+(ones*1);
    printf("3 digit number after making the tens digit 0 is:%d",res);
    return 0;
}
