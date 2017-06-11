
/**
 * @file <stats.c> 
 * @brief <program to analyze an array of unsigned char data items and report analytics on the    
 *          maximum, minimum, mean, and median of the data set >
 * @author <Michael Moneer>
 * @date <11th June >
 *
 */

#include <stdio.h>
#include "stats.h"
#define SIZE (40)

int main()
{
	  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
    printf("The Array Sorted from largest to smallest\n");
    sort_array(test, SIZE);
    print_array(test, SIZE);
    print_statistics(test, SIZE);
	return 0;
}

/* The Implementation of functions */
void print_array(unsigned char arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}	
}

int find_minimum(unsigned char arr[], int size)
{
    int i;
    int minimum=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]<minimum)
            minimum = arr[i];
    }
    return minimum;
}

int find_maximum(unsigned char arr[], int size)
{
    int i;
    int maximum=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>maximum)
            maximum = arr[i];
    }
    return maximum;
}

float find_mean(unsigned char arr[], int size)
{
    int i;
    float mean; 
    float sum=0.0;
    for(i=0; i<size; i++)
    {
      sum = sum +(float)arr[i];  
    }
    mean = ((float)(sum/size));
    return mean;
}

float find_median(unsigned char arr[], int size)
{
    float median;
    int temp = size/2;
    median = ((float)(arr[temp] + arr[temp-1])/2);
    return median;
}

void sort_array(unsigned char arr[], int size)
{
    int i,j,temp;
    for(j=1; j<size; j++) 
    {
         for(i=0; i<(size-1); i++)
         {
             if(arr[i]<arr[i+1])
              {
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
              }
        
         }
    }

}


void print_statistics(unsigned char arr[], int size)
{
	int maximum, minimum;
    float median, mean;
	maximum = find_maximum(arr,size);
	minimum = find_minimum(arr,size);
	mean = find_mean(arr,size);
	median = find_median(arr,size);
	
	printf("\nThe Maximum of the array is %d\n",maximum);
	printf("The Minimum of the array is %d\n",minimum);
	printf("The Median of the array is %0.1f\n",median);
	printf("The Mean of the array is %0.1f\n",mean);
}