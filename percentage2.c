#include<stdio.h>
#include<conio.h>

void main()
{
	void main()
{
	int mark[5], i;
	float sum=0, perc, avg;
    clrscr();	
    printf("Enter marks obtained in Physics, Chemistry, Maths, CS, English :");
	for(i=0; i<5; i++)
	{
	 scanf("%d",&mark[i]);
	 sum=sum+mark[i];
	}
	avg=sum/5;
	perc=(sum/500)*100;
	printf("Average Marks: %f",avg);
	printf("\nPercentage: %f%",perc);
	getch();
}