#include <iostream>
#include <string>
#include <algorithm>
#include <set>



bool reverse_string(char a, char b);

using namespace std;

int main() {

string s1("avsbdnfmghwjekidlmz");
set<string> words;

sort(s1.begin(), s1.end(), reverse_string);


for(auto i = 0 ; i < s1.length(); i++)
{
  for(auto x = i ; x < s1.length(); x++)
  {
    words.insert(s1.substr(i,x));

  }
}

for(auto i: words)
{
  cout<<i<<endl;
}

}


bool reverse_string(char a, char b){
  return b < a;
}
