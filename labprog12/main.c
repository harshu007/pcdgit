// Reverse the no & cheak weather it is palindrome or not//
#include<stdio.h>
int main( )
{
	int n,reverse=0;
	printf("Enter a number to reverse\n");
	scanf("%d",&n);
	while (n!=0)
{
	reverse=(reverse*n);
	reverse=(reverse+n%10);
	n=(n/10);
}
   printf("reverse of enter number         is=%d\n",reverse)
 return 0;
 
}
	
