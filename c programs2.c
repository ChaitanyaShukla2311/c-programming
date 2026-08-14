#include <stdio.h>

int main()
{
	int n;
	printf("Enter array length: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter array elements : ");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<n; i++)
	{
		int minIndex=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[minIndex]>arr[j])
			{
				minIndex=j;
			}
		}
		if(minIndex!=i)
		{
			int temp=arr[minIndex];
			arr[minIndex]=arr[i];
			arr[i]=temp;
		}
	}

	printf("Array after selection sort : ");
	for(int i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}


	return 0;
}
