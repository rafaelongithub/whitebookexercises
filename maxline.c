/***********************************************************
* This is a program from THE C PROGRAMMING LANGUAGE BOOK
* from Brian W. Kernighan and Dennis M. Ritchie.
* I decided to write the more comprehensible form of the
* program to me.
*
* This programms reads diferentes text lines and prints
* the largest one.
***********************************************************/

#include <stdio.h>

// This constante define the maximun amount of caracteres that a line can have
#define MAXLINE 1000

/******************************************************************
* Here we have the description of the functions that we are going
* to define mygetline, I use to get the line typed in the terminal
* copy I use to copy a text from one place to another
******************************************************************/
int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while((len = mygetline(line, MAXLINE)) > 0){
    if(len > max){
      max = len;
      copy(longest, line);
    }
  }

  if(max > 0){
    printf("%s", longest);
  }

  return 0;
}

int mygetline(char line[], int maxline){
  int charcter, i;

  for(i = 0; (i < maxline-1) && (charcter=getchar()) != EOF && (charcter != '\n'); i++){
    line[i] = charcter;
  }

  if(charcter == '\n'){
    line[i] = charcter;
    i++;
  }

  line[i] = '\0';
  return i;
}

void copy (char to[], char from[]){
  int i;

  i = 0;

  while((to[i] = from[i]) != '\0'){
    i++;
  }
}
