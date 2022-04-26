#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> q;

  for (int j = 1; j < 6; j++) q.push_back(j);
  cout << q.front() << endl;
  cout << q.back() << endl;

  for (int j = 6; j < 11; j++) q.push_front(j);
  cout << q.front() << endl;
  cout << q.back() << endl;
}