#include<stdio.h>
#include <string.h>

badFunction(char* inputSource) {
        int x = 0;
        x++;

	char input [100];
  	strcpy(&input, inputSource); 
	
}


int main (int argc, char *argv[])
{
  char* input;
  input = argv[1];
  badFunction(input);

  return 0;
}
