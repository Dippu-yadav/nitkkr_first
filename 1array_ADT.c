#include <stdio.h>
#include <stdlib.h>
struct myarry
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarry(struct myarry *a, int tsize, int usize)
{
    (a)->total_size = tsize;
    (a)->used_size = usize;
    (a)->ptr = (int *)malloc(tsize * sizeof(int));
}
void fill(struct myarry*a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter %d no.",i);
        scanf("%d",&a->ptr[i]);
    }
}
void show(struct myarry*a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",a->ptr[i]);
    }
    
}

int main()
{
    struct myarry marks;
    createarry(&marks, 10, 5);
    fill(&marks);
    show(&marks);
}