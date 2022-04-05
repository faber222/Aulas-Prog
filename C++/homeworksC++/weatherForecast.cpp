#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string data;
  string value;

  cout << "Barometer:(rise, stationary or lower)";
  cin >> data;

  cout << "Thermometer:(rise, stationary or lower)";
  cin >> value;

  if (data == "rise" && value == "rise") {
    cout << "Good weather, warm and dry winds" << endl;
  }
  if (data == "rise" && value == "stationary") {
    cout << "Good weather, fresh east winds" << endl;
  }
  if (data == "rise" && value == "lower") {
    cout << "Good weather, south to southwest winds" << endl;
  }
  if (data == "stationary" && value == "rise") {
    cout << "The weather is getting better, east winds" << endl;
  }
  if (data == "stationary" && value == "stationary") {
    cout << "Uncertain weather, variable winds" << endl;
  }
  if (data == "stationary" && value == "lower") {
    cout << "Probable rain, south to southeast winds" << endl;
  }
  if (data == "lower" && value == "rise") {
    cout << "Unstable weather, frontal approach" << endl;
  }
  if (data == "lower" && value == "stationary") {
    cout << "Warm front with probable rains" << endl;
  }
  if (data == "lower" && value == "lower") {
    cout << "Plenty of rain and strong south-southwest winds" << endl;
  }
};