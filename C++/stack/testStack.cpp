#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> q1, q2;

  for (int j = 1; j < 8; j++) q1.push(j);

  while (!q1.empty()) {
    q2.push(q1.top());
    q1.pop();
  }

  while (!q2.empty()) {
    cout << q2.top() << endl;
    q2.pop();
  }
}