#include <memory>
#include <string>
#include <iostream>

using namespace std;

class Person{

  private:
  string food;
  int age;

  public:
  int get_age()
  {
    return age;
  }

  void set_age( int n)
  {
    age = n;
  }

  string get_food()
  {
    return food;
  }

  void set_food( string x)
  {
    food = x;
  }

  Person( int a, string b)
  {
    set_age(a);
    set_food(b);
  }
  
};

int main() {

  unique_ptr<Person> jose(new Person( 12, "Tacos"));

  cout<<jose->get_food()<<endl;
  cout<<jose->get_age();

  std::cout << "Hello World!\n";
}
