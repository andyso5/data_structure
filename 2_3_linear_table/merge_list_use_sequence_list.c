#include <stdio.h>
#define len_a 4
#define len_b 7
#define len_c len_a + len_b

void main(void)
{
    int pa=0, pb=0, pc=0;
    //len_c = len_a + len_b;
    int a[len_a] = {3, 5, 8, 11}; //sorted array
    int b[len_b] = {2, 6, 8, 9, 11, 15, 20}; //sorted array
    int c[len_c];
    
    for (pc=0; pc<len_c; pc++)
    {
        if (a[pa]<b[pb])
        {
            printf("pa=%d\n", pa);
           c[pc] = a[pa];
           if (pa != len_a - 1) pa++;
           else
           {
               for (;pb < len_b; pb++)
               {
                   c[++pc] = b[pb];
               }
               break;
           }
           
           
        }
        else
        {
            printf("pb=%d\n", pb);
           c[pc] = b[pb];
           if (pb != len_b - 1) pb++; 
           else
           {
               
               for (;pa < len_a; pa++)
               {
                   c[++pc] = a[pa];
               }
               break;
           }
        }
    }
    for (int i=0; i<len_c; i++)
    printf("%d\n", c[i]);
}