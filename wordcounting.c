#include <stdio.h>
/***********************************************************
* This is a program from THE C PROGRAMMING LANGUAGE BOOK
* from Brian W. Kernighan and Dennis M. Ritchie.
* I decided to write the more compressible form of the
* program to me.
*
* This program count how many words have you typed
***********************************************************/

#define IN 1
#define OUT 0

int main(){
  int state = OUT;

  int wordcount = 0;
  int c;

  while((c = getchar()) != EOF){
    if(c != ' ' && c != '\n' && c != '\t'){
      state = OUT;
    }else if ( state == OUT){
      state = IN;
      wordcount+=1;
    }
  }

  printf("The number of words is: %d", wordcount);

  return 0;
}
