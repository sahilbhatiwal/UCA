#include<stdio.h>
void main() {
    int t;
    scanf("%d ",&t);
    fflush(stdin);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char str[1000];
    while(t--) {
        scanf("%[^\n]%*c",str);
        printf("%s\n",str);
    }
}
