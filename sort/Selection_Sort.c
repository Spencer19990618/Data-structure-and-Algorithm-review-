#include<stdlib.h>
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int *data, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n", data[i]);
    }
}

void selectionsort(int *data, int size)
{
   int min_index;
   for(int i=0; i<size-1; i++)
   {
        min_index = i; 
        for(int j=i+1; j<size; j++)
        {
            if(data[min_index]>data[j])
                min_index = j;
        }   
        swap(&data[min_index], &data[i]);
   }
}

int main()
{
    int data[] = {2, 4, 6, 9, 10, 3, 5, 1};
    int size = sizeof(data) / sizeof(data[0]);
    selectionsort(data, size);
    printarray(data, size);
    return 0;
}