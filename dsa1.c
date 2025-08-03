#include<stdio.h>
#include<string.h>
int compare(const char* serialno)
  {  return(strcmp(serialno , "BB1")>=0 && strcmp(serialno, "CC6")<=0);}
int main(){
    typedef struct engineparts
    {
        char serialno[10];
        int manuyear;
        int quantity;
        char material[10];
    }engine;
    int n;
    printf("Enter no of parts you want : ");
    scanf("%d",&n);
    engine part[n];
    for (int i =0; i <n; i++)
    {    printf("Details of part %d:\n ",i+1);
         printf("enter serial no. : ");
        scanf("%s",part[i].serialno);
         printf("enter year : ");
        scanf("%d",&part[i].manuyear);
         printf("enter quantity : ");
        scanf("%d",&part[i].quantity);
         printf("enter material : ");
        scanf("%s",part[i].material);
        printf("---------------------------\n");
    }
    for(int i=0;i<n;i++){
        if(compare(part[i].serialno))
        {   printf("PARTS WITH SERIAL NO. BETWEEEN 'BB1' AND 'CC6' : \n");
            printf("serial no. of the part is : %s\n",part[i].serialno);
        printf("manuf. year of the part is : %d\n",part[i].manuyear);
        printf("total quantity : %d\n",part[i].quantity);
        printf("material used is : %s\n",part[i].material);
        }
    }
    return 0;
}