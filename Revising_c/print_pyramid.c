/* 
 * Print a pyramid with given number of steps
 * @Sahil Bhatiwal (1910990683),28/07/2021
 * assignment: C Foundations(question 2)
 */
#include<stdio.h>
int main() {
    int steps, i = 0, j = 0, l = 0;
    printf("Enter number of steps : ");
    scanf("%d",&steps);
    for(i = 0; i < steps; i++) {
        for(l = steps - i; l > 0; l--) {
	    printf(" ");
	}
        for(j = 0; j <= i; j++) {
	    printf("# ");
	}
	printf("\n");
    }
    
    return 1;
}
