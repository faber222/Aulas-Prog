#include <iostream>
#include <string>

using namespace std;

struct Nome {
  string nome, sobrenome;

  // construtor: separa um nome completo,
  // armazenando nome e sobrenome nos respectivos atributos
  Nome(const string& nome_completo) {
    int pos = nome_completo.find(' ');
    nome = nome_completo.substr(0, pos);
    int pos2 = nome_completo.find_first_not_of(" ", pos);
    sobrenome = nome_completo.substr(pos2);
  }
};

int main() {
  auto alguem = new Nome("Dona Bilica da Silva");

  cout << "Nome: " << alguem->nome << endl;
  cout << "Sobrenome: " << alguem->sobrenome << endl;

  delete alguem;
}