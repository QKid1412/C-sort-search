#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Bubble_sort(unsigned int arr[], unsigned int n)
{
    unsigned int i;
    unsigned int j;
    unsigned int swap;

    int flag=1; 
    // control the case that there was no swap in the inner loop
    for(i=0;flag==1 && i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               swap=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=swap;   
               //swap max to the last position

               flag=1;
            }
            
        }
    }
}
