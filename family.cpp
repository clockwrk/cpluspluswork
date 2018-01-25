#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

struct Person {
  int age;
  string name;
};

bool compareAge(const Person &a, const Person &b)
{
  return a.name < b.name;
}

int main() {


  vector<Person> my_family(5);

  my_family.at(0).name = "Ivan Renteria";
  my_family.at(1).name = "Ana Renteria";
  my_family.at(2).name = "Marisol Renteria";
  my_family.at(3).name = "Albino Renteria";
  my_family.at(4).name = "Eddie Renteria";

  my_family.at(0).age = 24;
  my_family.at(1).age = 60;
  my_family.at(2).age = 32;
  my_family.at(3).age = 62;
  my_family.at(4).age = 28;

  sort(my_family.begin(), my_family.end(), compareAge);

  for(auto i: my_family)
  cout<< i.name << endl;
  // cout<<my_family.back().name<<endl;

}
