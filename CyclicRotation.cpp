// you can use includes, for example:
#include <algorithm>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
  if(A.size()==0) return A;
    // write your code in C++14 (g++ 6.2.0)
    int temp = A[A.size()-1],
        next_temp;

    for(int x = 0; x < K; x++)
    {
        for(int y = 0; y < A.size(); y++)
        {
            swap(temp, A[y]);

        }
        swap(A[0],temp);
    }

    return A;

}
