#include <fstream>
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string str, conteudo, inseridor, res, fim;
  int i = 0, j = 2, y, l, m, n, exc;
  queue<string> fil;

  ifstream arq(argv[1]);
  if (!arq.is_open()) return 0;
  if (j > argc) return 0;
  while (getline(arq, str)) {
    fil.push(str);
  }

  while (!fil.empty()) {
    while (j != argc) {
      string ver = argv[j];
      int k = stoi(ver);
      res = fil.front();
      k++;
      y = k;
      while (y != 0) {
        l = res.find_first_of(',');
        y--;
        m = l;
        if (l != -1) {
          if (y == 0) {
            conteudo = res.substr(0, l + 1);
            if (conteudo[0] == ',') conteudo.erase(0, 1);
            inseridor += conteudo;
            break;
          }
        }
        while (l != -1) {
          l = res.find_first_of(',', m + 1);
          y--;
          if (l == -1) {
            if (y == 0) {
              m = res.size();
              int w = res.rfind(",");
              conteudo = res.substr(w + 1, w - m + 1);
              if (conteudo[0] == ',') conteudo.erase(0, 1);
              inseridor += conteudo + ",";
              break;
            }
          }
          if (y == 0) {
            conteudo = res.substr(m + 1, l - m);
            if (conteudo[0] == ',') conteudo.erase(0, 1);
            inseridor += conteudo;
            break;
          }
          m = l;
        }
      }
      j++;
    }

    int ult = inseridor.rfind(",");
    exc = inseridor.size() - 1;
    if (ult == exc) inseridor.erase(ult, 1);
    inseridor += " ";
    fil.pop();
    j = 2;
  }
  cout << inseridor;
  return 0;
}