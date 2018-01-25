#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
map<char, int> letters;
string name = "Alexander the Great";

  for(auto i: name)
  {
    if(letters[i]==0)
      {
        letters[i]=1;
      }
    else
      {
        letters[i]+=1;
      }
  }

for(auto& kv: letters)
{
  cout<<kv.first<<":"<<kv.second<<endl;
}

}
