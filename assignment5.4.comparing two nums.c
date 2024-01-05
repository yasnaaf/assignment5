#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y;
printf("enter two numbers:\n");
scanf("%d %d",&x,&y);
if(x>y){printf("%d>%d",y,x);}
else if(x<y){printf("%d<%d",y,x);}
else if(x=y){printf("%d=%d",y,x);}

    return 0;
}
