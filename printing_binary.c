#include <stdio.h>

void printbits(unsigned int x){
    for(int i = sizeof(x) * 8 - 1; i>=0; i--){
        printf("%d", (x>>i)&1);
    }
    printf("\n");
}
int main() {
    unsigned int a=0, b=0;
    printf("Enter numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printbits(a);
    printbits(b);

    return 0;
}
