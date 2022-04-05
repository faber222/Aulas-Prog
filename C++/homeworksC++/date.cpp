#include <stdlib.h>

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  try {
    int dd, mm, yy;
    string x, y, z;

    string v = argv[1];
    x += v[0];
    x += v[1];
    y += v[3];
    y += v[4];
    z += v[6];
    z += v[7];
    z += v[8];
    z += v[9];

    dd = stoi(x);
    mm = stoi(y);
    yy = stoi(z);
    if (yy >= 0000 && yy <= 3000) {
      if (mm >= 1 && mm <= 12) {
        if ((dd >= 1 && dd <= 31) &&
            (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 ||
             mm == 12)) {
          cout << dd << "/" << mm << "/" << yy << endl;
        } else if ((dd >= 1 && dd <= 30) &&
                   (mm == 4 || mm == 6 || mm == 9 || mm == 11)) {
          cout << dd << "/" << mm << "/" << yy << endl;
        } else if ((dd >= 1 && dd <= 28) && (mm == 2)) {
          cout << dd << "/" << mm << "/" << yy << endl;
        } else if (dd == 29 && mm == 2 &&
                   (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0))) {
          cout << dd << "/" << mm << "/" << yy << endl;
        } else
          printf("data invalida\n");
      } else {
        printf("data invalida\n");
      }
    } else {
      printf("data invalida\n");
    }
  } catch (...) {
    cout << "Erro de conversao: nao eh uma string numerica inteira valida!"
         << endl;
  }
}