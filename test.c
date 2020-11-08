#include <stdio.h>
#include <malloc.h>

struct A{
    int var;
};
void main(void)
{
    // struct A* a;
    // a = (struct A*)malloc(sizeof(struct A));
    // a->var = 0;
    
    // if (1>0)
    // {
    //     printf("yes");
    //     printf("%d", a->var>=1);
    // }
    // else
    // {
    //     printf("no");
    // }

    // for (int i=0; i!=2;i++)
    // {
    //     printf("yes\n");
    // }

    // printf("%d", 1||0);
    for (int i=0; i!=5; i++)
    {
        printf("%d\t", i);
    }
    
}