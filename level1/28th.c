/* 
Get a three-digit number from user. If the sum of the one’s digit and
tens’s digit is less than 10, then print “Success”, otherwise print
“Failure”.
*/

#include<stdio.h>
int main(){
    int num,one,ten,res;
    printf("Get the 3 digit number from the user:");
    scanf("%d",&num);
    one=num%10;
    ten=(num/10)%10;
    res=one+ten;
    if(res<10){
        printf("Success");
    }else{
        printf("Failure");
    }
}
