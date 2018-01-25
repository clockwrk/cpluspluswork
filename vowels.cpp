#include <vector>
#include <iostream>
#include <regex>
#include <iterator>

using namespace std;

std::vector<int> vowelIndices(std::string word)
{
  std::cout<<word<<endl;
  std::vector<int> res;


   std::regex words_regex("[aeiouyAEIOUY]", std::regex_constants::icase);
  auto words_begin =
    std::sregex_iterator(word.begin(), word.end(), words_regex);
  auto words_end = std::sregex_iterator();
  
  
  for (std::sregex_iterator i = words_begin; i != words_end; ++i)
  {
    res.push_back((*i).position()+1);
  }
  
  cout<<res.size();
  
	return res;
}