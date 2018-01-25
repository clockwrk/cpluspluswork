#include <iostream>
using namespace std;

template< class T >
class Jose
{
  public:
  Jose(T a)
  {
    cout<< a <<" is not a character"<<endl;
  }
};

template<>
class Jose<char> {
  public:
  Jose( char a)
  {
    cout << a << " This is a character! "<< endl;
  }

};
  
using namespace std;

int main() {

  Jose<int> object_one(10);
  Jose<double> object_two(4.0);
  Jose<char> object_three('C');


  return 0;
}
