#include <stdio.h>
/***********************************************************
* This is a program from THE C PROGRAMMING LANGUAGE BOOK
* from Brian W. Kernighan and Dennis M. Ritchie.
* I decided to write the more compressible form of the
* program to me.
*
* This program count how many times you type an caracter.
***********************************************************/

int main(){
  int charcount = 0;
  int c;

  while((c = getchar()) != EOF){
    if(c != ' ' && c != '\n' && c != '\t'){
      charcount+=1;
    }
  }

  printf("The number of chars is: %d", charcount);

  return 0;
}
