/* Write a loop program to print odd numbers 1 to 9. */
/*op:1 3 5 7 9 */

#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=9;i++){
      if(i%2!=0){
          printf("%d\n",i);
      }  
    }
     return 0;
}
