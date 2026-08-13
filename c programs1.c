1)How to find minimum element from array 
code:

//Without using function

#include <stdio.h>

int main()
{
    int n;
    printf("Enter array length : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :");
    for(int i = 0;i <n;i++)
    {
     scanf("%d",&arr[i]);
    }
    
    int min = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[min]>arr[i])
        {
            min = i;
        }
    }
    
    printf("Minimum :%d",arr[min]);
    
    return 0;
}

2)How to find minimum element from array using function
code:
#include <stdio.h>

int Minimum(int n,int arr[])
{
    int min = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[min]>arr[i])
        {
            min = i;
        }
    }
    return min;
}

int main()
{
    int n;
    printf("Enter array length : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :");
    for(int i = 0;i <n;i++)
    {
     scanf("%d",&arr[i]);
    }
    
    int result = Minimum(n,arr);
    printf("Minimum :%d",arr[result]);
    
    return 0;
}


3)How to find maximum element from array 
code:
#include <stdio.h>

int main()
{
    int n;
    printf("Enter array length : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :");
    for(int i = 0;i <n;i++)
    {
     scanf("%d",&arr[i]);
    }
    
    int max = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }
    }
    
    printf("Maximum :%d",arr[max]);
    
    return 0;
}


4)How to find maximum element from array using function
code:
#include <stdio.h>

int Maximum(int n,int arr[])
{
    int max = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter array length : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :");
    for(int i = 0;i <n;i++)
    {
     scanf("%d",&arr[i]);
    }
    
    int result = Maximum(n,arr);
    printf("Maximum :%d",arr[result]);
    
    return 0;
}

5)swap two variables
code:

#include <stdio.h>

int main()
{
    int a,b,temp=0;
    
    printf("Enter a: ");
    scanf("%d",&a);
    
    printf("Enter b: ");
    scanf("%d",&b);
    
    printf("Original :a =%d ,b =%d",a,b);
    
    temp = a;
    a=b;
    b=temp;
    
    printf("\nAfter swapping : a = %d,b = %d",a,b);

    return 0;
}

