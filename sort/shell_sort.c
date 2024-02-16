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

void shellsort(int *data, int size)
{
    int i, j, insert_num;
    int step = size / 2;
    while(step)
    {
        for(i=0+step; i<size; i+=step)
        {
            insert_num = data[i];
            j = i - step;
            while(j>=0 && insert_num<data[j])
            {
                swap(&data[j], &data[j+step]);
                j -= step;
            }
        }
        step /= 2;
    }
}

int main()
{
    int data[]={16,25,39,27,12,8,45,63,10};
    int size = *(&data + 1) - data;
    shellsort(data, size);
    printarray(data, size);
    return 0;
}