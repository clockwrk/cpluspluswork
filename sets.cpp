#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  set<int> a, b, c, d, e;

  //odds into a
  for(int x=0; x < 10; x++)
  {
    if(1 == x%2)a.insert(x);
  }

  a.erase(5);

    //evens into b
  for(int y=0; y<10; y++)
  {
    if(0 == y%2)b.insert(y);
  }

  b.erase(2);

set_union(a.begin(),a.end(),b.begin(),b.end(),insert_iterator<set<int> >(c,c.begin()));

  set_intersection(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<set<int> >(d, d.begin()));

  set_difference(b.begin(), b.end(), c.begin(), c.end(), insert_iterator<set<int> >(e,e.begin()));

  cout<<"A ";
  for(auto i: a)
  {
    cout<<i<<", ";
  }
  cout<<endl;

  cout<<"B ";
  for(auto i: b)
  {
    cout<<i<<", ";
  }
  cout<<endl;

  cout<<"C ";
  for(auto i: c)
  {
  cout<<i<<", ";
  }
  cout<<endl;

  cout<<"D ";
  for(auto i: d)
  {
    cout<<i<<", ";
  }
  cout<<endl;

    cout<<"e ";
  for(auto i: e)
  {
    cout<<i<<", ";
  }
  cout<<endl;


}
