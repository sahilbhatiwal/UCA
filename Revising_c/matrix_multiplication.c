/*
 * multiply two given matrix  
 * @Sahil Bhatiwal (1910990683),28/07/2021
 * assignment: C Foundations(question 1)
 */
#include<stdio.h>
int main() {
    int n, m, x, i, j;
    printf("Enter the length and width of first matrix: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    for( i = 0; i < n; i++) {
	for ( j = 0; j < m; j++) {
	    scanf("%d",&a[i][j]);
	}
    }
    printf("Enter the length and width of second matrix: ");
    scanf("%d %d",&m,&x); 
    int b[m][x];
    for( i = 0; i < m; i++) {
	for ( j = 0; j < x; j++) {
	    scanf("%d",&b[i][j]);
	}
    }
    int c[n][x];
    for(i = 0; i < n; i++) {
	for(j = 0; j < x; j++) {
	    c[i][j] = 0;
	}
    }
    for(int i = 0; i < n; i++) {
	for(int k = 0; k < x; k++) {
	    for(int j = 0; j < m; j++) {
	        c[i][k] += a[i][j] * b[j][k];
	    }
	}
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < x; j++) {
	    printf("%d ",c[i][j]);
	}
	printf("\n");
    }
    return 1;
}
