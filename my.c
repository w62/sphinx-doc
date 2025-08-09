#include <stdio.h>

void main (void);
void hello (void);
void main (void)
{
    printf("hello world\n!");
    chello();
}

void chello (void)
{
    printf("from hello");
    return;
}