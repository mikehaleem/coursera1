/**
 * @file <stats.c> 
 * @brief <program to analyze an array of unsigned char data items and report analytics on the    
 *          maximum, minimum, mean, and median of the data set >
 * @author <Michael Moneer>
 * @date <11th June >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
* This Function Takes inputs array of data & the size of this array,
* prints the Maximum value in the array, The minimum Value in the array,
* the median of the array & the mean of the array.
*/
void print_statistics(unsigned char arr[], int size);

/**
* This Function Takes inputs array of data & the size of this array, 
* & Prints the elements of the array on screen.
*/
void print_array(unsigned char arr[], int size);

/**
* This Function Takes inputs array of data & the size of this array, 
* & Finds the Median of the array.
*/
float find_median(unsigned char arr[], int size);

/**
* This Function Takes inputs array of data & the size of this array, 
* & Finds the Mean of the array.
*/
float find_mean(unsigned char arr[], int size);

/**
* This Function Takes inputs array of data & the size of this array, 
* & Finds the Maximum of the array.
*/
int find_maximum(unsigned char arr[], int size);

/**
* This Function Takes inputs array of data & the size of this array, 
* & Finds the Minimum of the array.
*/
int find_minimum(unsigned char arr[], int size);

/**
* This Function Takes inputs array of data & the size of this array, 
* & sorts the elements of the array in descending order.
*/
void sort_array(unsigned char arr[], int size);
#endif /* __STATS_H__ */

   


