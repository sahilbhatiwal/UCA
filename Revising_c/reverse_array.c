/* 
 * Reverse the given array of n length
 * @Sahil Bhatiwal (1910990683),28/07/2021
 * assignment: C Foundations(question 4)
 */
#include<stdio.h>
int main() {
    int n, temp = 0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n/2; i++) {
	temp = arr[i];
	arr[i] = arr[n - i - 1];
	arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++) {
	printf("%d ",arr[i]);
    }
    printf("\n");
    return 1;
}
