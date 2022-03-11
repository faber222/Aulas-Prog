#include <math.h>
#include <stdio.h>
#include <string.h>

struct tipo_triangulo {
  float lado1, lado2, lado3;
};
struct tipo_retangulo {
  float lado1, lado2;
};

float area_triang(struct tipo_triangulo *tr) {
  float p, area;
  float a, b, c;
  float a1, b1, c1;

  a = tr->lado1;
  b = tr->lado2;
  c = tr->lado3;

  p = (a + b + c) / 2;
  a1 = p - a;
  b1 = p - b;
  c1 = p - c;
  area = sqrt(p * a1 * b1 * c1);
  return area;
}

float area_ret(struct tipo_retangulo ret) {
  float x = ret.lado1;
  float y = ret.lado2;
  float z;
  z = x * y;
  return z;
}

float area_pol(struct tipo_triangulo tr, struct tipo_retangulo ret) {
  float tri, ret2, total;
  tri = area_triang(&tr);
  ret2 = area_ret(ret);
  total = tri + ret2;
  return total;
}

int main() {
  float tri, ret, tot;
  struct tipo_triangulo triangulo = {2.0, 4.0, 2.5};
  struct tipo_retangulo retangulo = {6.5, 7.8};
  tri = area_triang(&triangulo);

  printf("area total = %f\n", area_pol(triangulo, retangulo));
  return 0;
}