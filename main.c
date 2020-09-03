#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
  char* cstr = readline("Enter temperature in Celsius");
  double celsius = atof(cstr);
  return 0;
}