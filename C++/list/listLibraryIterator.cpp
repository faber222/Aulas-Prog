#include <iostream>
#include <list>

using namespace std;

int left() {
  list<int> numeros;

  numeros.push_back(4);
  numeros.push_back(8);
  numeros.push_back(15);
  numeros.push_back(16);
  numeros.push_back(23);
  numeros.push_back(42);

  // Obtém um iterador para o primeiro elemento da lista
  // Veja o uso da palavra-chave "auto", que faz o compilador deduzir o
  // tipo de dados da variável "inicio". Isso é prático para evitar escrever
  // longos e confusos nomes de tipos de dados ...
  auto inicio = numeros.begin();

  // Obtém um iterador para o fim da lista. Ele não referencia nenhuma dado
  // de fato armazenado na lista ! Referenciar esse iterador gera um erro !
  // Veja também que aqui não foi usada a palavra-chave "auto". O tipo
  // de dados do iterador não tem um nome simples nem bonito ...
  list<int>::iterator fim = numeros.end();

  // Mostra o primeiro dado da lista, e para isso referencia o iterador "inicio"
  // Veja que parece a referência a um ponteiro
  cout << "Primeiro dado: " << *inicio << endl;

  // Um iterador pode ser incrementado. Assim se consegue acessar o segundo dado
  // da lista
  inicio++;
  cout << "Segundo dado: " << *inicio << endl;

  // Um iterador pode ser decrementado. Com isso, pode-se acessar o último
  // dado por meio do iterador "fim"
  fim--;
  cout << "Ultimo dado: " << *fim << endl;

  // Se decrementá-lo de novo, pode-se acessar o penúltimo dado
  fim--;
  cout << "Penultimo dado: " << *fim << endl;
}

int main() {
  list<int> numeros;

  numeros.push_back(4);
  numeros.push_back(8);
  numeros.push_back(15);
  numeros.push_back(16);
  numeros.push_back(23);
  numeros.push_back(42);

  // Itera do início ao fim da lista
  // A variável "it" é o iterador, que será usado para acessar os dados da lista
  // Note como ao final de cada repetição do laço o iterador é incrementado ...
  // isso faz com que se avance para o próximo dado da lista

  for (auto it = numeros.begin(); it != numeros.end(); it++) {
    // acessa o dado atual da iteração: ele é referenciado pelo iterador,
    // como se este fosse um ponteiro

    cout << "Numero: " << *it << endl;
  }
  
  // Itera do início ao fim da lista
  // O iterador é usado implicitamente. Por isso, no laço a variável de controle
  // acessa diretamente o dado atual da iteração (no caso, a variável "x").

  for (auto& x : numeros) {
    // "x" contém o dado atual da iteração
    cout << "Numero: " << x << endl;
  }
}