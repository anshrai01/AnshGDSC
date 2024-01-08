#include <stdio.h>

int main(void) {
    int x,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x>=2000)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
	return 0;
}
