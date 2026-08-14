#include <stdio.h>

int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            printf("element found at index %d\n",i);
            return 0;
        }
    }
    printf("Key not found!!!");
    return 0;
}


int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int key;
    printf("Enter key to search : ");
    scanf("%d",&key);
    
    LinearSearch(arr,n,key);

    return 0;
}






#include<stdio.h>
int BinarySearch(int arr[],int n,int key)
{
   int low = 0;
   int high = n - 1; 
   while (low <= high) 
   { 
       int mid = (low + high) / 2; 
       if (arr[mid] == key) 
        { 
            printf("Element found at index %d\n", mid);
            return 0; 
            
        } else if (key < arr[mid])
        { 
            high = mid - 1;
        }
        else 
        { 
            low = mid + 1; 
            
        } 
       
   }
    printf("Key not found!!!");
    return 0;
}


int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter array elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int key;
    printf("Enter key to search : ");
    scanf("%d",&key);
    
    BinarySearch(arr,n,key);

    return 0;
}








#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 array elements between 1 to 5 :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<1 || arr[i]>5)
        {
            printf("Only Enter element between 1 to 5:");
            scanf("%d",&arr[i]);
        }
    }
    
    printf("Array : ");
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    

    for(int i=0;i<10;i++)
    {
        int freq=0;
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
            }
        }
        printf("\n%d = freq is %d\n",arr[i],freq);
    }

    return 0;
}

