/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false
*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;
        else {
            string concat = s + s;
            if (concat.find(goal) != string::npos)
                return true;
            else
                return false;
        }
    }
};

int main() {
    string s1, s2;
    cout << "Enter input string" << endl;
    cin >> s1;
    cout << "Enter goal string" << endl;
    cin >> s2;
    
    Solution solution;
    if (solution.rotateString(s1, s2))
        cout << "Strings are rotations of each other." << endl;
    else
        cout << "Strings are not rotations of each other." << endl;

    return 0;
}

