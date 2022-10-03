#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
int n1;
int *heap;

int* insert(int *heap,int n,int data)
{
    if (n == 0)
    {
        heap[n+1] = data;
    }
    else
    {
        int k = n+1;
        int l=k;
        heap[l] = data;
        while (data > heap[l / 2])
        {
            heap[l] = heap[l / 2];
            l = l / 2;
        }
        heap[l] = data;
    }
    return heap;
}

int* create(int*heap,int n)
{
    for (int i = 0; i < n; i++)
    {
        heap = insert(heap,i,heap[i+1]);
    }
    return heap;
}

void display(int*heap,int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",heap[i]);
    }
    printf("\n");
}

void swap(int*x,int*y)
{
    // printf("swapping %d %d\n",*x,*y);
    int k = *x;
    *x = *y;
    *y = k;
}

// int delete(int*heap)
// {
//     heap[n1+1] = heap[1];
//     printf("last element is %d\n",heap[n1]);
//     heap[1] = heap[n1];
//     n1--;
//     int i=1,j=i;
//     while((2*i)<n1)
//     {
//         // printf("i is %d\n",i);
//         if(heap[2*i]>heap[2*i+1])
//         {
//             j = 2*i;
//             swap(&heap[i],&heap[j]);
//         }
//         else
//         {
//             j = 2*i+1;
//             swap(&heap[i],&heap[j]);
//         }
//         i = j;
//     }
//     display(heap,n1);
//     return heap[n1+2];
// }

int delete(int*heap)
{
    int max, last, j, i;
    max = heap[1];
    last = heap[n1--];
    for (i = 1; i * 2 <= n1; i = j) 
    {
        j = i * 2;
        if (j != n1 && heap[j + 1] > heap[j]) {
            j++;
        }
        if (last < heap[j]) {
            heap[i] = heap[j];
        }
        else 
        {
            break;
        }
    }
    heap[i] = last;
    return max;
}

int* heapify(int*heap,int i)
{
    int j=i;
    // printf("%d\n",j);
    while(2*j<=n1)
    {
        int c1 = 2*j;
        int c2 = 2*j+1;
        if(heap[c1]!=0 && heap[c2]!=0)
        {
            if(heap[c1]>heap[c2] && heap[j]<heap[c1])
            {
                swap(&heap[j],&heap[c1]);
                j = j*2;
            }
            else if(heap[c2]>heap[c1] && heap[j]<heap[c2])
            {
                swap(&heap[j],&heap[c2]);
                j=j*2+1;
            }
        }
        else if(heap[c1]==0 && heap[c2]!=0)
        {
            if(heap[j]<heap[c2])
            {
                swap(&heap[j],&heap[c2]);
                j = 2*j+1;
            }
        }
        else if(heap[c1]!=0 && heap[c2]==0)
        {
            if(heap[j]<heap[c1])
            {
                swap(&heap[j],&heap[c1]);
                j = 2*j;
            }
        }
    }
    return heap;
}

int* create_2(int*heap,int n)
{
    int*heap_2;
    for(int i=n;i>0;i--)
    {
        // printf("%d ",i);
        heap = heapify(heap,i);
    }
    heap_2 = heap;
    // display(heap,n);
    return heap_2;
}

int main()
{
    printf("the maximum size of the heap\n");
    scanf("%d", &n);

    printf("the use size of the heap\n");
    scanf("%d", &n1);

    heap = (int *)malloc(n + 1 * sizeof(int));
    
    for (int i = 1; i <= n1; i++)
    {
        scanf("%d",&heap[i]);
    }

    for (int i = n1+1; i <= n; i++)
    {
        heap[i] = 0;
    }


    // heapify method for creation of heap
    heap = create_2(heap,n1);

    display(heap,n1);

    int *dec = (int*)malloc(n1*sizeof(int));
    int i=0;
    while(n1)
    {
        int p = delete(heap);
        // printf("\ndeleted element is :%d ",p);
        dec[i] = p;i++;
    }
    
    for (int j = 0; j < i; j++)
    {
        printf("%d ",dec[j]);
    }


    // 2nd method to create a heap  - normal method
    // heap = create(heap,n1);

    // display(heap,n1);
    // // printf("\n");

    // // printf("\n");
    // int *dec = (int*)malloc(n1*sizeof(int));
    // int i=0;
    // while(n1)
    // {
    //     int p = delete(heap);
    //     // printf("\ndeleted element is :%d ",p);
    //     dec[i] = p;i++;
    // }
    
    // for (int j = 0; j < i; j++)
    // {
    //     printf("%d ",dec[j]);
    // }
    
    // int p=delete(heap);
    // printf("\n%d ",p);

    // p=delete(heap);
    // printf("\n%d \n",p);

    // p=delete(heap);
    // printf("\n%d \n",p);

    // display(heap,n1);
    return 0;
}
