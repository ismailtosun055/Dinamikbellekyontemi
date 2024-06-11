#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int array[] , int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1]){
            	print("merhaba");
			}
            swap(&array[j],&array[j+1]);
        }
    }
}
