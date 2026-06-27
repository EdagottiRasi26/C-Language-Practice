/* Write a program that asks the user for a number N, and then prints all the even numbers from 1 to $N$.
Example Input: 10
Example Output: 2 4 6 8 10
Hint: You can either increment your loop counter by 2 (i += 2) or use an if statement with the modulo operator (i % 2 == 0) inside the loop.
*/


#include <stdio.h>
int main()
{
    int i,N;
    
    printf("Get the number from the user:");
    scanf("%d",&N);
    for(i=0;i<=N;i+=2){
        printf("%d\n",i);
    }
        return 0;
}
