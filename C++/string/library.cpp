/*
atoi  -> ASCII to integer.
atol  -> ASCII to long.
atof  -> ASCII to floating.
stoi  -> string to integer.
stol  -> string to long.
stoll -> string to long long.
stof  -> string to float.
stod  -> string to double.
stold -> string to long double.
*/

#include <string.h>  // para função de string C

#include <iostream>
#include <string>

using namespace std;

int main() {
  string texto =
      "Todos nos herdamos no sangue lusitano uma boa dosagem de lirismo.";
  string anexo =
      "Mesmo quando as minhas maos estão ocupadas em torturar, esganar, "
      "trucidar, o meu coracao fecha os olhos e sinceramente chora.";

  cout << "Comprimento da string: " << texto.size() << endl;
  cout << "Primeira letra: " << texto[0] << endl << endl;

  int espaco = texto.find(' ');
  cout << "Primeira palavra: " << texto.substr(0, espaco) << endl << endl;

  // concatena "anexo" na string "texto"
  texto += anexo;
  cout << "Apos concatenacao: " << texto << endl << endl;

  // apaga "espaco" caracteres a partir da posição 0
  texto.erase(0, espaco);
  cout << "Apos remover primeira palavra: " << texto << endl << endl;

  // substitui 5 caracteres a partir da posição 0 por "Nem todos"
  texto.replace(0, 5, "Nem todos");
  cout << "Apos substituir algo: " << texto << endl << endl;

  // Remove o trecho que corresponde ao conteúdo de anexo.
  // Note que não precisa informar a quantidade de caracteres a serem removidos,
  // pois a remocao deve ser feita da posição indica até o final da string
  int pos = texto.size() - anexo.size();
  texto.erase(pos);
  cout << "Apos remocao de anexo: " << texto << endl << endl;

  // Obtém a string no formato da linguagem C
  const char* ref = texto.c_str();
  cout << "Como string C: " << ref << endl;
  cout << "Comprimento da string C: " << strlen(ref) << endl;
}