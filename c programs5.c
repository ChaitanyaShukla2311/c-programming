#include <stdio.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for(int i=1;i<numsSize;i++){
        nums[i]+=nums[i-1];
    }
    return nums;
}

int main()
{
    int numsSize;
    printf("Enter array size: ");
    scanf("%d",numsSize);
    
    int nums[numsSize];
    printf("enter array elements :");
    for(int i=0;i<numsSize;i++)
   {
       scanf("%d",&nums[i]);
   }
   
   for(int i=0;i<numsSize;i++)
   {
       printf("%d\t",nums[i]);
   }
   
  
    return 0;
}
