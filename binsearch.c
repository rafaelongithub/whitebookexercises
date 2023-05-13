#include <stdio.h>
/***********************************************************
* This is a program from THE C PROGRAMMING LANGUAGE BOOK
* from Brian W. Kernighan and Dennis M. Ritchie.
* I decided to write the more compressible form of the
* program to me.
*
* This program is a classical binary_search algorithm
***********************************************************/

int binary_search(int value, int values[], int num_elements){
  int low, high, mid;

  low = 0;
  high = num_elements - 1;

  while(low <= high){
    mid = (low+high)/2;

    if(value < values[mid]){
      high = mid - 1;
    }else if(value > values[mid]){
      low = mid + 1;
    }else{
      return mid;
    }
  }

  return -1;
}

int main(){
  int values[] = {1,2,3,4,5,6,7,8,9,10};
  printf("The index is: %d\n", binary_search(5, values, 10) );
  return 0;
}
