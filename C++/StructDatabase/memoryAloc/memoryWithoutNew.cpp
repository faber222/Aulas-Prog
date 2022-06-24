#include <strings.h>

#include <iostream>

using namespace std;

#define SIZE (1 << 23)

// g++ -std=c++11

// limita em 7

int main(int argc, char* argv[]) {
  if (argc < 2) {
    cout << "Uso: " << argv[0] << " memoria_MB" << endl;
    return 0;
  }

  int size = stoi(argv[1]) * (1 << 20);
  char mem[size];

  cout << "Criou vetor com " << size / 1024 << " kB" << endl;
  cout << "- Endereço do vetor=" << hex << (void*)mem << endl;
  cout << "- Endereço da variável size=" << hex << (void*)&size << endl;
  cout << "- Distância entre o vetor e size: " << dec
       << ((char*)&size - mem) / 1024 << endl;
  bzero(mem, size);
  cout << "Zerou a memória do vetor ..." << endl;

  return 0;
}