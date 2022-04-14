#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

string readFileIntoString(const string& path) {
  auto ss = ostringstream{};
  ifstream input_file(path);
  if (!input_file.is_open()) {
    cerr << "Could not open the file - '" << path << "'" << endl;
    exit(EXIT_FAILURE);
  }
  ss << input_file.rdbuf();
  return ss.str();
}

int main() {
  string filename("arquivo.csv");
  string file_contents;
  map<int, vector<string>> csv_contents;
  char delimiter = ',';

  file_contents = readFileIntoString(filename);

  istringstream sstream(file_contents);
  vector<string> items;
  string record;

  int counter = 0;
  while (getline(sstream, record)) {
    istringstream line(record);
    while (getline(line, record, delimiter)) {
      record.erase(remove_if(record.begin(), record.end(), isspace),
                   record.end());
      items.push_back(record);
    }

    csv_contents[counter] = items;
    items.clear();
    counter += 1;
  }

  exit(EXIT_SUCCESS);
}
