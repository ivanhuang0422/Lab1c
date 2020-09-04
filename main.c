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
  printf("%s° in celsius is equivalent to %f° fahrenheit.\n", cstr, fahrenheit);
  return 0;
}