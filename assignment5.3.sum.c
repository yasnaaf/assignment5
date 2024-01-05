#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,i=0;
printf("enter some numbers then press 0: ");
scanf("%d",&x);
while(x!=0){scanf("%d",&x); i+=x;}
printf("the sum of your numbers is: %d",i);

    return 0;
}
