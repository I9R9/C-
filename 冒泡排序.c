#include <stdio.h>

//冒泡排序
void Bobble_Sort(int arr[], int len)
{
    int i, j;
    int temp;
    for (i = 0; i<len-1; i++)
    {
        for (j = 0; j<len-1-i; j++)
        {
            if (arr[j]>arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }
}


int main(void)
{
    int arr[] = {3,1,4,6,0};
    Bobble_Sort(arr, 5);
    int k;
    for (k=0; k<5; k++)
    {
        printf("%d  ",arr[k]);
    }
}