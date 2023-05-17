#include <stdio.h>
#include <string.h>


int count_matching_positions(char s[], char t[]) {
    int freq_s[26] = {0}, freq_t[26] = {0};
    int len_s = strlen(s), len_t = strlen(t);
    int count = 0;

    // Check if the lengths of s and t are equal
    if (len_s != len_t) {
        return -1;
    }

    // Count the frequency of each character in s and t
    for (int i = 0; i < len_s; i++) {
        freq_s[s[i] - 'a']++;
        freq_t[t[i] - 'a']++;
    }

    // Check if s is an anagram of t
    for (int i = 0; i < 26; i++) {
        if (freq_s[i] != freq_t[i]) {
            return -1;
        }
    }

    // Count the number of matching positions
    for (int i = 0; i < len_s; i++) {
        if (s[i] == t[i]) {
            count++;
        }
    }

    return count;
}

int main() {
    char s[101], t[101];

    // Read input strings
    scanf("%s %s", s, t);

    // Compute the number of matching positions
    int result = count_matching_positions(s, t);

    // Print the result
    printf("%d", result);

    return 0;
}