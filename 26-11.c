#include <stdio.h>

int main() {
  float V = 500, rf = 10, Pl;
  float il, rl = 1;

  float maior_pot = 0, maior_rl;

  for (rl = 1; rl <= 20; rl = rl + 0.5) {
    il = V / (rl + rf);
    Pl = rl * il * il;
    if (Pl > maior_pot) {
      maior_pot = Pl;
      maior_rl = rl;
    }
  }
  printf("Maior potência dissipada = %.2f W para carga de %.2f ohms\n",
         maior_pot, maior_rl);
}