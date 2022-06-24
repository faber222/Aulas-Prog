#include <cctype>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <unordered_map>

using namespace std;

bool comp(const pair<string, pair<int, int>>& p1,
          const pair<string, pair<int, int>>& p2) {
  return p1.first < p2.first;
}

int main(int argc, char* argv[]) {
  ifstream arq("./arquivo.txt");

  unordered_map<string, pair<int, int>> database;
  list<pair<string, pair<int, int>>> orderDatabase;
  string palavra;
  string x_log;
  string y_sec;

  while (arq >> palavra >> x_log >> y_sec) {
    if (database.count(palavra) > 0) {
      database[palavra].first++;
      database[palavra].second += stoi(y_sec);
    } else {
      database[palavra].first = 1;
      database[palavra].second = stoi(y_sec);
    }
  }
  try {
    string user = argv[1];
    if (database.count(user) > 0) {
      cout << user << " " << database[user].first << " "
           << database[user].second;
    } else {
      cout << "usuario invalido" << endl;
    }

  } catch (...) {
    for (auto& x : database) {
      orderDatabase.push_back(x);
    }
    orderDatabase.sort(comp);
    for (auto& i : orderDatabase) {
      cout << i.first << " " << i.second.first << " " << i.second.second
           << endl;
    }
  }
}