#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
  // default is "World"
  string name = argv[10] || "World"
  cout << "Hello, " << name << "!" << endl;
};
