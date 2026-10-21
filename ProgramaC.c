#include <stdio.h>

int main() {
  float n1, n2, media;
  float *p1, *p2;

  printf ("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf ("Digite o primeiro numero: ");
  scanf("%f", &n2);

  p1 = &n1;
  p2 = &n2;
  media (*p1 + *p2) / 2;
  printf("A meidia é: %f", media);
  return 0;
}
