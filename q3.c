#include<stdio.h>
main()
{
	int i,n;
	printf("Enter your array size: ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter  elements of the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Odd elements in the array are: ");
	for(i=0;i<n;i++)
	{
		if(i/2==1)
		{
			printf("%d,",a[i]);
		}
		
	}
}