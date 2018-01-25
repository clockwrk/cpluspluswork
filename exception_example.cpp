#include <iostream>
using namespace std;

int main() {

try{
  throw 101;
}
catch( int x)
{
  cout<<x;
}

  return 0;
}
