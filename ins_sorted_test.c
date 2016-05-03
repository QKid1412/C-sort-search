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
        while(j>0 && slide<arr[j-1])
        {
             arr[j]=arr[j-1];
             j--;
        }
        arr[j]=slide;
    }

}           

int main()
{
    unsigned int len;
/*  when testing, directly assign 20000,40000,100000 to len. 
    printf() and scanf() will not be needed  */
    printf("Please input the length: ");
    scanf("%ld",&len);

    unsigned int array[len];
    unsigned int i;
/*  Generate a sorted array of distinct integers from 0 to len-1.*/
    for(i=0;i<len;i++)
    {
        array[i]=i;
        //printf("%ld ",array[i]);
    }
    printf("\n");

    Insertion_sort(array,len);

/*  Only for testing, not necessary. Not included when measuring time.  
    for(i=0;i<len;i++)
    {
        printf("%ld ",array[i]);
    }
    printf("\n");*/
 
    return 0;
}
