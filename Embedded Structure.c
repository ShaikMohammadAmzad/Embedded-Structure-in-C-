#include<stdio.h>

struct student
{
	int regdno;
	struct result
{
	int marks;
	
}r1;	
}s1;

int main()
{
	s1.regdno=7131;
	s1.r1.marks=100;
	
	printf("%d\n",s1.regdno);
	printf("%d",s1.r1.marks);
	
	
	return 0;
}
