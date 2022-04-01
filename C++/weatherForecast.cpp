#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string data;
  string value;

  cout << "Barometro:";
  cin >> data;

  cout << "Termometro:";
  cin >> value;

  if (data == "subindo" && value == "subindo") {
    cout << "Tempo bom, ventos quentes e secos" << endl;
  }
  if (data == "subindo" && value == "estacionario") {
    cout << "Tempo bom, ventos de leste frescos" << endl;
  }
  if (data == "subindo" && value == "baixando") {
    cout << "Tempo bom, ventos de sul a sudeste" << endl;
  }
  if (data == "estacionario" && value == "subindo") {
    cout << "Tempo mudando para bom, ventos de leste" << endl;
  }
  if (data == "estacionario" && value == "estacionario") {
    cout << "Tempo incerto, ventos variaveis" << endl;
  }
  if (data == "estacionario" && value == "baixando") {
    cout << "Chuva provavel, ventos de sul a sudeste" << endl;
  }
  if (data == "baixando" && value == "subindo") {
    cout << "Tempo instavel, aproximacao de frente" << endl;
  }
  if (data == "baixando" && value == "estacionario") {
    cout << "Frente quente, com chuvas provaveis" << endl;
  }
  if (data == "baixando" && value == "baixando") {
    cout << "Chuvas abundantes e ventos de sul a sudeste fortes" << endl;
  }
};