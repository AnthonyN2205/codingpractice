/* Given an integer x, return true if x is a palindrome, and false otherwise. */

class Solution {
public:
    bool isPalindrome(int x) {
        string c = to_string(x);
        string r = c;

        reverse(c.begin(), c.end());


        return c == r;
    }
};