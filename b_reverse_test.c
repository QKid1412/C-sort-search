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

int main()
{
    unsigned int len;
/*  when testing, directly assign 20000,40000,100000 to len. 
    printf() and scanf() will not be needed  */
    printf("Please input the length: ");
    scanf("%ld",&len);
    unsigned int array[len];

    unsigned int i;
/*  Generate a reverse sorted array of distinct integers from len-1 to 0.*/
    for(i=0;i<len;i++)
    {
        array[i]=len-i-1;
        //printf("%ld ",array[i]);
    }
    printf("\n");

    Bubble_sort(array,len);

/*  Only for testing, not necessary. Not included when measuring time.  
    for(i=0;i<len;i++)
    {
        printf("%ld ",array[i]);
    }
    printf("\n");*/
 
    return 0;
}
