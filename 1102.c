/*fig. 2.5: fig02_05.c
Addition program*/
#include<stdio.h>

/* funciton main begins program execution*/
int main(void)
{
	int integer1; /* first number to be input by user */
	int integer2;/* second number to be input by user*/
	int sum;/* variable in which sum will be stroed */
	
	printf("Enter first interger\n");/*prompt*/
	scanf(" %d",&integer1);/*read an integer*/
    
    printf("Enter second interger\n");/*prompt*/
    scanf("%d", &integer2 );/*read an integer*/

    sum = integer1+ integer2;/* assign total to sum */
    
    printf("%d+ %d=%d", integer1,integer2, sum);/*print sum*/
    
    printf( "sum is %d\n", integer1 + integer2); /*print sum*/
return 0;/* invicate that program ended successfunlly*/
}/*end  main*/
