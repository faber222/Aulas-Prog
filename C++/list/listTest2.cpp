#include <iostream>
#include <list>

using namespace std;

int main() {
  list<string> q;

  q.push_back("questão");
  q.push_back("uma");
  cout << q.front() << " " << q.back() << endl;

  q.pop_front();

  q.push_front("outra");
  q.push_front("mais");
  cout << q.front() << " " << q.back() << endl;

  q.pop_back();

  cout << q.front() << " " << q.back() << endl;
}