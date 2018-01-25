#include <iostream>

template <class T>

class Jose
{
  T first, second;
  public:
  Jose( T a, T b)
  {
    first = a;
    second = b;
  }

  T biggest();
};

template <class T>

T Jose<T> :: biggest()
{
  return first>second?first:second;
}


using namespace std;

int main() {

  Jose<int> taco(3,2);

  cout<<taco.biggest();


  return 0;
}
