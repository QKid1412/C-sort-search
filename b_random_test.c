#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int *ran_arr(unsigned int len)
{
    unsigned int *arr=malloc(len*sizeof(unsigned int));
    unsigned int i;
    unsigned int a;
    unsigned int b;

    srand((unsigned int)time(NULL)); // In order to generate different random arrays each time.

/*generate array of distinct integers*/
    for(i=0;i<len;i++)
    {
        arr[i]=i;// generate a sorted array
    }
    for(i=len-1;i>0;i--)
    {
        a=rand()%i;//generate random index
        b=arr[i];  
        arr[i]=arr[a];
        arr[a]=b;
    }
     
    return arr;
} 

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
    unsigned int *array=ran_arr(len);

    unsigned int i;

/*  Only for testing, not necessary. Not included when measuring time.

    for(i=0;i<len;i++)
    {
        printf("%ld ",array[i]);
    }
    printf("\n");*/

    Bubble_sort(array,len); // Bubble_sort

/*  Only for testing, not necessary. Not included when measuring time.  
    for(i=0;i<len;i++)
    {
        printf("%ld ",array[i]);
    }
    printf("\n");*/
    free(array);
    return 0;
}
