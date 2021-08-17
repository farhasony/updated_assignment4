#include<stdio.h>
#include<stdlib.h>

#define MAX 4
void Input(int *,int);
void Display(int *,int);
void Bubblesort(int *,int);
//void Bubblesortmax(int *,int);
 int main()
{
	int arr[MAX];
	Input(arr,MAX);
	printf("elements before sorting\n");
	Display(arr,MAX);
	Bubblesort(arr,MAX);
/*	printf("elements from min values to max After sorting\n");
	Display(arr,MAX);
	Bubblesortmax(arr,MAX);
	printf("elements from max values to min values After sorting\n");
	Display(arr,MAX);*/

/*void Bubblesortmin(int *p,int size)
{
int i,j,temp;
		for(i=1;i<size;i++)
		{ 
						for(j=0;j<size-i;j++)
						{
								if(p[j]>p[j+1]) // comparing consecutive elements
											{	
											temp=p[j];
											p[j]=p[j+1];
											p[j+1]=temp;
											}
						}
		}
}*/
}
void Bubblesort(int *p,int size)
{
int i,j,temp;
		for(i=1;i<size;i++)
		{ 
						for(j=0;j<size-i;j++)
						{
								if(p[j]<p[j+1]) // comparing consecutive elements
											{	
											temp=p[j];
											p[j]=p[j+1];
											p[j+1]=temp;
											}
						}
		}
		printf("max is %d\n",p[0]);
		printf("min is %d\n",p[size-1]);
		
}
void Display(int *p,int size)
	{
	int i;
	for(i=0;i<size;i++)
					printf("%d ",p[i]); // printing the elements of an array
	printf("\n\n");
	}
void Input(int *p,int size)
	{
	int i=0;
	for(i=0;i<size;i++)
		scanf("%d",&p[i]); 
	}

	//time complexity=o(n2) because we are using two for loops
