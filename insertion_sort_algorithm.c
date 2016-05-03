#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Insertion_sort(unsigned int arr[], unsigned int n)
{
    unsigned int i;
    unsigned int j;
    unsigned int slide;
    for(i=1;i<n;i++)
    {
        j=i;
        slide=arr[i];
        while(slide<arr[j-1] && j>0)
        {
             arr[j]=arr[j-1];
             j--;
        }
        arr[j]=slide;
    }

}
