#include <stdio.h>
#include <malloc.h>

typedef int ElementType;

typedef struct LNode
{
    ElementType var;
    struct LNode* next;
} LNode, * pList;




int InitList(pList* p) // the first node has no valid data
{
    *p = (pList)malloc(sizeof(LNode));
    if (!*p) exit(-1);
    (*p)->var = -1;
    (*p)->next = NULL;
    return 0;
}

void DestroyList(pList p)
{

    return;
}

void ClearList(pList p)
{
    return;
}

int ListEmpty(pList p) //为什么严蔚敏建议直接传List？
{
    if (p->var)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    

int ListLength(pList p, int * length) //为什么严蔚敏建议直接传List？
{
    if (!p) return 0;
    int count = -1;
    do
    {
        p = p->next;
        count++;
    } while (p);
    *length = count;
    return 1;
    
}

int GetElem(pList p, int i, int* e)
{
    if (!p) return 0;
    for (int j=0; j!=i; j++)
    {
        
        p = p->next;
        if (!p) return 0;
    }
    *e = p->var;
    return 1;
    
}

int InsertList(pList p, int i, int e) // maybe this is why head node exists  
{
    if (i<1 || !p)
        return 0;
    pList pnode = (pList)malloc(sizeof(LNode));
    pnode->var = e;
    for (int j=1; j!=i; j++)
    {
        
        p = p->next;
        if (!p) return 0;
    }
    pnode->next = p->next;
    p->next = pnode;
    return 1;

}

void TraverseList(pList p)
{
    if (!p) return;
    while (p->next)
    {
        p = p->next;
        printf("%d  ",p->var);
    }
    return;
}

int AppendList(pList p, int i)
{

    pList tmp=p;
    do
    {
        p=tmp;
        tmp = p->next;
        
    } while (tmp);
    
    pList pnode = (pList)malloc(sizeof(LNode));
    pnode->var = i;
    pnode->next = NULL;
    p->next = pnode;
    free(tmp);
    return 1;



}

void main(void)
{

    pList s=NULL;
    InitList(&s);
    printf("init finished\n");
    for (int i=0; i!=8; i++)
    {
        AppendList(s, i);
    }
    int res = InsertList(s, 6, 100);
    printf("result is %d\n", res);
    printf("traverse num: ");
    TraverseList(s);
    printf("\nGet data: ");
    
    GetElem(s, 3, &res);
    printf("%d\n", res);
    int len = -1;
    ListLength(s, &len);
    printf("list length: %d", len);


}