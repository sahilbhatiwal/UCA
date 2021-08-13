/*
 * Program to findInversion Count for an array indicates – how far (or close)
 * the array is from being sorted. If the array is already
 * sorted, then the inversion count is 0, but if the array is sorted in the reverse order, the inversion count is the maximum. 
 *
 * @Sahil Bhatiwal (1910990683), 13 - Aug - 2021
 * Assignment 7 (Question 1)
 *
 */
#include <stdio.h>

int main()
{
    int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int arr[n];
    int count=0;
    for(int i = 0; i < len; i++) {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=1;i<len;i++)
    {
        int ele=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>ele)
            {
                arr[j+1]=arr[j];
                count++;
            }
        }
        arr[j+1]=ele;
    }
   printf("%d",count);
    return 0;
}
