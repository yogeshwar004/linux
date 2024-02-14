#include<stdio.h>
void palindrome(int num)
{
	int rem,rev,ncopy,i;
	ncopy=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(ncopy==rev)
		printf("\nGiven number is palindrome\n");
	else
		printf("\nGiven number is not palindrome\n");
}
int main()
{
        int num;
	printf("Enter the number:");
	scanf("%d",&num);
	palindrome(num);
}
