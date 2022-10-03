#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("ENTER %d ELEMENTS:\n",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",p+i);
    }
    printf("THE ORIGINAL ARRAY: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\nTHE REVERSED ARRAY: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
