#include <iostream>
#include <list>
#include <string>

using namespace std;

// Tipo Alguem: representa uma pessoa com seu nome e idade
struct Alguem {
  string nome;
  int idade;

  Alguem() { idade = 0; }
  Alguem(const string& umNome, int age) {
    nome = umNome;
    idade = age;
  }
};

// sobrecarga do operador< para o tipo Alguem
bool operator<(const Alguem& este, const Alguem& outro) {
  if (este.idade == outro.idade) {
    return este.nome < outro.nome;
  }
  return este.idade < outro.idade;
}

int main() {
  list<Alguem> l;

  Alguem joao("Joao", 20);
  l.push_back(joao);

  Alguem x1("Amanda", 15);
  l.push_back(x1);

  Alguem x2("Gabriel", 19);
  l.push_back(x2);

  l.push_back(Alguem("Isadora", 18));
  l.push_back(Alguem("Gustavo", 18));

  // ordena a lista
  l.sort();

  // mostra a lista ...
  for (auto& pessoa : l) {
    cout << pessoa.nome << ": " << pessoa.idade << endl;
  }

  cout << endl;
}