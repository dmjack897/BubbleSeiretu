#include<stdio.h>

int main()
{
	int arr[5]={3,1,5,4,2};
	int i,j,temp;

	for(i=5-1;i>0;i--)   
	{
		for(j=0;j<i;j--)  
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)   
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}