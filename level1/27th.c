/* 
Get a three-digit number from user. If the sum of the one’s digit and
hundred’s digit is less than 10, then print “Success”, otherwise print
“Failure”.
*/

#include<stdio.h>
int main(){
    int num,one,hun,res;
    printf("Get the 3 digit number from user:");
    scanf("%d",&num);
    one=num%10;
    hun=(num/100)%10;
    res=one+hun;
    if(res<10){
        printf("Success");
    }else{
        printf("Failure");
    }
}
