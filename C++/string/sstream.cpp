#include <iostream>
#include <sstream>

using namespace std;

int left() {
  int dia, mes, ano;

  cout << "Dia: ";
  cin >> dia;
  cout << "Mes: ";
  cin >> mes;
  cout << "Ano: ";
  cin >> ano;

  // cria-se uma stringstream para escrita
  ostringstream out;

  // escreve-se na stringstream
  out << dia << "/";
  out << mes << "/";
  out << ano;

  // Aqui se obtém o conteúdo armazenado na stringstream
  cout << "Data: " << out.str() << endl;
}

int main() {
  int dia, mes, ano;
  string data;

  cout << "Data (dia/mes/ano): ";
  getline(cin, data);

  // cria-se uma stringstream para leitura
  istringstream inp(data);
  char separador;

  // lê-se da stringstream
  inp >> dia;
  inp >> separador;
  cout << "Dia: " << dia << endl;
  inp >> dia;
  inp >> separador;
  cout << "Mes: " << dia << endl;
  inp >> dia;
  cout << "Ano: " << dia << endl;

  // Aqui se mostram os dados extraídos da stringstream
  // cout << "Dia: " << dia << endl;
  // cout << "Mes: " << dia << endl;
  // cout << "Ano: " << dia << endl;
}