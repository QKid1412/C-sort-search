#include <stdio.h>
#include <stdlib.h>

unsigned int B_no_l_Search(unsigned int *arr, unsigned int len, unsigned int target)
{

/*  Recursive solution. This can return the exact index.
    if(len==0)
       return -1;
    if(arr[len/2]==target)
       return len/2;
    //divide into two parts
    else if(arr[len/2]>target)
       return B_no_l_Search(arr,len/2,target);
    else
       return len/2+B_no_l_Search(arr+len/2,len-len/2,target);*/


/*  Loop solution: returns 1 if found, -1 if not found*/
    // ensure that target is actually in the array.
    while(len>0)
    {
		  /* mid-point is the target */
		  if(arr[len/2]==target)
          { return 1; }  // return 1 if found.
          
          /* divide into two parts if not found yet.*/

          else if(arr[len/2]>target)
          {   len=len/2; }   

         /* if target is in the first part, only search the first         
            part by replacing len by len/2.*/

          else{ 
              arr=arr+(len/2);
			  len=len-len/2;
		  }
          /* if target is in the second half, use   
              arr=arr+(len-1)/2 to change the pointer of the 
              first position in order to only search the second 
              half.*/
    }
    return -1;
}

/* Only for testing*/
void main()
{
    unsigned int i;
    unsigned int len=9;
    unsigned int *arr=malloc(len*sizeof(int));
    unsigned int loc;
    for(i=0;i<len;i++)
    {
        arr[i]=i;
        printf("%ld ", i);
    }
    loc=B_no_l_Search(arr,len,2);
    printf("\n\n%d\n", loc);
    free(arr); 
} 
