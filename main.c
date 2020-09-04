#include <stdio.h>

int main(void) {
  float c, f;

  printf("Enter temperature in Celsius: ");
  scanf("%f", &c);

  f = (c * 1.8) +32;

  printf("%f degrees in Celcius is equivalent to %f in degrees Farenheit.", c, f);
  return 0;

}