#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

bool sort_By_Y(const pair<int,int> &a, const pair<int,int> &b)
{
  return a.second > b.second;
}

int main() {
  int N, x,y;
  vector< pair<int,int> > a;
  cin >> N;
  for(int i=0;i<N;++i){
    cin >> x >> y;
    a.push_back(make_pair(x,y));
  }
  sort(a.begin(), a.end(), sort_By_Y);

  for(int i=0; i < N; i++)
  {
    cout << 'x' << a[i].first << endl;
    cout << 'y' << a[i].second << endl;
  }

}
