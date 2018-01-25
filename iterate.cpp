#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
set<int> a = {1,2,3,4,4,5} ;
map<string, string> capitals;

capitals["New York"] = "New York City";
capitals["California"] = "San Francisco";
capitals["Arizona"] = "Phoenix";
capitals["Utah"] = "Salt Lake City";

cout<<"set"<<endl;
for(set<int>::iterator i=a.begin(); i!=a.end(); ++i)
{
  cout <<*i<<endl;
}

for(map<string, string>::iterator i=capitals.begin(); i!=capitals.end();i++)
{
  cout << i->first << " => " << i->second <<endl;
}
