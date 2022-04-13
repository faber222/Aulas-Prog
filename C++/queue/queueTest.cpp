#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  for (int j = 1; j < 8; j++) {
    q.push(j);
  }
  cout << q.front() << endl;
  cout << q.back() << endl;

  // q.pop();
  cout << q.front() << endl;
  cout << q.back() << endl;
}