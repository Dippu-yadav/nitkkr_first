#include<stdio.h>
 typedef struct date{
    int day;
    int month;
    int year;
}date;
int compare(date Date1,date Date2){
    if(Date1.day==Date2.day && Date1.month==Date2.month && Date1.year==Date2.year){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
date Date1;
    printf("ENTER DATE 1:");
    scanf("%d %d %d",&Date1.day,&Date1.month,&Date1.year);
date Date2;
    printf("ENTER DATE 2:");
    scanf("%d %d %d",&Date2.day,&Date2.month,&Date2.year);
    printf("%d",compare(Date1,Date2));
}