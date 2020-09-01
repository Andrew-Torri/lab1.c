#include <stdio.h>
#include<readline/readline.h>

int main(void) 
{
  char *temp = readline("Enter temperature in celsius: ");
  double ctemp = atof(temp);
  double ftemp = (ctemp * 1.8) + 32;
  printf("%fd° in Celsius is equivalent to %fd° Fahrenheit.", ctemp, ftemp);
  return 0;
}