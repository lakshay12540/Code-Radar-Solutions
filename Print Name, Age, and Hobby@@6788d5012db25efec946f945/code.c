#include <stdio.h>
int main() {
    char a;
    int b;
    char c;
    scanf("%c %d %c\n",&a,&b,&c);
    printf("Name: %c\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %c",c);
    return 0;
}