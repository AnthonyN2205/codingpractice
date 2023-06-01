/* Given an integer x, return true if x is a palindrome, and false otherwise. */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    return 0;
}
class Solution {
public:
    bool isPalindrome(int x) {
        string c = to_string(x);
        string r = c;

        reverse(c.begin(), c.end());


        return c == r;
    }
};