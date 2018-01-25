#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stack>

using namespace std;

bool is_balanced(string expression) {
    stack<string> brackets;
    string current;

    while(!expression.empty())
    {
        current = expression[expression.length()-1];
        expression.pop_back();

        if(brackets.empty())
        {

            brackets.push(current);
        }
        else if((brackets.top()=="]" && current == "[") ||
                (brackets.top()=="}" && current == "{") ||
                (brackets.top()==")" && current == "("))
        {

            brackets.pop();
        }
        else
        {

            brackets.push(current);
        }
    }



    return !brackets.size();

}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
