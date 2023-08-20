/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i])
                return false;
        }
        return true;
    }
};
int main() {
    Solution solution;

    string s1, t1;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> t1;

    if(solution.isAnagram(s1, t1)) {
        cout << "They are anagrams." << endl;
    } else {
        cout << "They are not anagrams." << endl;
    }

    return 0;
}