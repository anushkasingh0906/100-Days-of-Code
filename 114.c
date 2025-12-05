Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
  
/*
Input 1:
s = "abcabcbb"
Output 1:
3
Explanation 1:
The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Input 2:
s = "bbbbb"
Output 2:
1
Explanation 2:
The answer is "b", with the length of 1.
Input 3:
s = "pwwkew"
Output 3:
3
Explanation 3:
The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/

input:

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);   // input string

    int lastIndex[256];  
    // to store last seen index of every character
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int left = 0, maxLen = 0;

    for(int right = 0; s[right] != '\0'; right++) {
        // if character already seen and inside current window
        if(lastIndex[(unsigned char)s[right]] >= left) {
            left = lastIndex[(unsigned char)s[right]] + 1;
        }

        // update last seen position
        lastIndex[(unsigned char)s[right]] = right;

        // update maximum window size
        int currLen = right - left + 1;
        if(currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);

    return 0;
}
