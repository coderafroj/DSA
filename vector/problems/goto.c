#include <stdio.h>

int main() {
    printf("Pehli line\n");
    goto jump_yahan;
    printf("Ye skip hogi\n");
    
    jump_yahan:
    printf("Teesri line\n");

    return 0;
}