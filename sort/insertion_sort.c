#include<stdio.h>

void printarray(int *data, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n", data[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void insertionsort(int *data, int size)
{
    int i, j, insert_num;
    for(i=1; i<size; i++)
    {
        insert_num =  data[i];
        j = i - 1;
        while(j>=0 && insert_num<data[j])
        {
            swap(&data[j+1], &data[j]);
            j--;
        }
    }
}

int main()
{
    int data[]={16,25,39,27,12,8,45,63};
    int size = sizeof(data)/sizeof(data[0]);
    insertionsort(data, size);
    printarray(data, size);
    return 0;
}