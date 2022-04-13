#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  q.push(11);

  while (!q.empty()) {
    int x = q.front();
    q.pop();

    cout << x << endl;
    int y = x / 2;

    if (y > 1) {
      if ((x % 2)) {
        q.push(y - 1);
        q.push(y + 1);
      } else {
        q.push(y);
      }
    }
  }
}