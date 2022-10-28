#include <stdio.hi>

int main(void)
{
	int n; 
	int a[5]; 
	int *p; 

	a[2] = 1024; 
	p = &n; 
	/* 
	 * write your line of code here... 
	 * Remember: 
<<<<<<< HEAD
	 * main - magic 
=======
>>>>>>> f5decefac0157efb9cc89559126378270d6a14dc
	 * - you are not allowed to use a 
	 * - you are not allowed to modify p 
	 * - only one statement 
	 * - you are not allowed to code anything else than this line of code 
	 */ 
	*(p + 5) = 98;
	/* ...so that this prints 98\n */ 
	printf("a[2] = %d\n", a[2]); 
	return (0); 
}
