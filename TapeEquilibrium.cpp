// you can use includes, for example:
#include <algorithm>
#include <vector>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

bool my_func(int a, int b){
        return a > b;
    }

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    int sum_left = 0,
        sum_right = 0;
    vector<int> difference;


    for(unsigned x= 0; x < A.size(); x++)
    {
        for(unsigned y = 0; y <= x ; y++)
        {
            sum_left+=A[y];
        }


        for(unsigned z = A.size(); x < z; z--)
        {
            sum_right+=A[z];
        }



        difference.push_back(abs(sum_left-sum_right));
        sum_left = 0;
        sum_right= 0;
    }

    sort(difference.begin(), difference.end());

    return difference[0];
}
