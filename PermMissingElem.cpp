// you can use includes, for example:
#include <algorithm>
#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sumA = 0;
    int sumB = 0;
    int vector_size = A.size();

    for(int x = 0 ; x < vector_size; x++ )
    {
    sumA += x+1;
    sumB += A[x];
    }

    return abs(sumA + vector_size+1 - sumB);

}
