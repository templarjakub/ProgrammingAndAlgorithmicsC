#include <stdio.h>

int main(void) {
    printf("Hello, World!\n\\");
    int a = 10;
    double b = 20;
    const char * c = "task";
//    printf("a = %d\n a = %x\n a = %o\n", a , b, c);
//    printf("a = %d\nc = %s\n", a , b, c);
//    printf("b = %f");
//    printf("c = %s\n");
    printf("zadej cislo ");
    scanf("%d %d", &a, &b );
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);

    if(b != 0){
        printf("%d / %f = %d", a, 1.0, a/b);
    }
    else{
        printf("nelze delit 0.\n");
    }

//    for(int i = 0; i<=5; i++){
//        printf("a = %f", a);
//    }
    return 0;
    //gcc -Wall -pedantic print.c
    //objdump -d a.out
}