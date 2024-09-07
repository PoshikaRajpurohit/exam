#include<stdio.h>
main()
{
	int e,m,s,ss,h;
	printf("Enter your english marks=");
	scanf("%d",&e);
	printf("Enter your maths marks=");
	scanf("%d",&m);
	printf("Enter your science marks=");
	scanf("%d",&s);
	printf("Enter your s.s marks=");
	scanf("%d",&ss);
	printf("Enter your hindi marks=");
	scanf("%d",&h);
	int average, sum ;
	sum=e+m+s+ss+h;
	average=sum*100/500;
	printf("your average=%d\n",average);

	(average >=80 && average<=100)?printf("Your grade is A"):
	(average>=60 && average<=79)?printf("Your grade is B"):
	(average>=50 && average<=59)?printf("Your grade is C")
	:(average>=40 && average<=49)?printf("Your grade is D"):
	(average>=34 && average<=39)?printf("Your grade is E"):
	(average>=1 && average<=33)?printf("Your grade is F")
	:printf("Enter valid marks");}