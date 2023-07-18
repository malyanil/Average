#include<stdio.h>
#include<conio.h>
int main()
{
//	int marks[5]={10,20,30,40,50};
	int marks[5],sum=0,i;
	float avg;
	
//	input marks
	for(i=0;i<5;i++)
	{
		printf("Input Marks :");
		scanf("%d",&marks[i]);
				
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("Average Marks = %f",avg);
	
	return 0;
}
