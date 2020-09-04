// author Yu-Hsiang, Huang ykh5222@psu.edu
// collaborator Nidhi Swammy nms6241@psu.edu
// collaborator Yiquan Li yvl5838@psu.edu
// collaborator 
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char * cstr = readline("Enter temperature in celsius: ");
  double ctemp = atof(cstr);
  double fahrenheit = (ctemp * 9/5) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", ctemp, fahrenheit);
  return 0;
}