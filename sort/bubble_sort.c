#include<stdlib.h>
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int *data, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<=n-2-i; j++)
        {
            if(data[j]>data[j+1])
                swap(&data[j], &data[j+1]);
        }
    }
}

void printarray(int data[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n", data[i]);
    }
}

int main(){
    int data[] = {2, 4, 6, 9, 10, 3, 5};
    int size = sizeof(data) / sizeof(data[0]);
    bubblesort(data, size);
    printarray(data, size);
    return 0;
}