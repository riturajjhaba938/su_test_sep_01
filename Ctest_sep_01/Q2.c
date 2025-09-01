#include <stdio.h>

int main()
{
    printf("Enter unit");
    int unit;
    scanf("%d",&unit);
    int bill=0;
    if(unit >=0 &&unit<51 )
    bill = 100 + unit*2;
    else if (unit<101)
    bill = 100 + unit*3;
    else if (unit < 201)
    bill = 100 + unit*4;
    else if (unit < 301)
    bill = 100 + unit*5;
    else {
    bill = 100 + unit*6;}
    printf("Total bill %d",bill);
return 0;
}