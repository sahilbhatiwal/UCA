/*
 * Given an unsorted array of size N, find Mth smallest number
 *
 * @Sahil Bhatiwal (1910990683)
 *
 * Assignment 8 (Ques 2), 20-08-2021
 *
 *
*/  


#include <stdio.h>

void merge(int *arr,int l ,int m ,int r) {
    int i=l ,j=m+1 ,k=l;

    int temp[r+1];

    while(i<=m && j<=r) {
       if(arr[i]<arr[j]) {
           temp[k++] = arr[i++];
       }
       else {
          temp[k++] = arr[j++];
       }
    }

    while(i<=m) {
    temp[k++]=arr[i++];
    }
    while(j<=r) {
    temp[k++]=arr[j++];
    }

    for(i=l ;i<=r;i++) {
        arr[i]=temp[i];
    }
}

void merge_sort(int *arr,int l ,int r) {
    if(l<r) {
     int mid = (l+r)/2;

      merge_sort(arr,l,mid);

      merge_sort(arr,mid+1,r);

      merge(arr,l,mid,r);
    }
}

int main()
{
   int n,m,i;

   printf("Enter size of array :");

   scanf("%d",&n);

   int arr[n];

   printf("Enter elements of array:");

   for(i = 0; i < n ; i++) {
       scanf("%d",&arr[i]);
   }
   printf("Enter the value of m");

   scanf("%d",&m);

   merge_sort(arr,0,n-1);

   printf("Mth smallest element is:%d \n",arr[m-1]);

}

