using namespace std;
#include <algorithm>
std::vector<std::vector<int>> rotateMatrixLeft(std::vector<std::vector<int>> matrix)
{
    int height = matrix.size();
    int length = matrix[0].size();

    vector< vector<int> > new_matrix(length, vector<int>(height,0));

    for(int x = 0; x < height; x++ )
    {
      for(int y = 0; y < length; y++)
      {
         new_matrix[y][x]=matrix[x][y];
      }
    }
    cout<<"Here";

    for(auto i: new_matrix)
      {
        for(auto j: i)
        {
          cout<<j<<" ,";
        }
        cout<<endl;
      }
    reverse(new_matrix.begin(), new_matrix.end());

    return new_matrix;
}
