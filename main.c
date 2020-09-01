//Author: Andrew Torri abt5506@psu.edu
//Contributor: Tristan Zanowic tsz5030@psu.edu
//Contributor: Purushottam Shukla pps5338@psu.edu
//Contributor: Reem Abdou rpa5285@psu.edu
#include<stdio.h>
#include<stdlib.h>
#include<readline/readline.h>

int main(void) 
{
  char *temp = readline("Enter temperature in celsius: ");
  double ctemp = atof(temp);
  double ftemp = (ctemp * 1.8) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", ctemp, ftemp);
  return 0;
}