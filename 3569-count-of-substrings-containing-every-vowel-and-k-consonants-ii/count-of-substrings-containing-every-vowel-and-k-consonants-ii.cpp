class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        int freq[2][128] = {};
        freq[0]['a'] = freq[0]['e'] = freq[0]['i'] = freq[0]['o'] = freq[0]['u'] = 1;

        long long response = 0;
        int currentK = 0, vowels = 0, extraLeft = 0, left = 0;

        for (int right = 0; right < word.length(); right++) {
            char rightChar = word[right];

            if (freq[0][rightChar]) {
                if (++freq[1][rightChar] == 1) vowels++;
            } else {
                currentK++;
            }

            while (currentK > k) {
                char leftChar = word[left++];
                if (freq[0][leftChar]) {
                    if (--freq[1][leftChar] == 0) vowels--;
                } else {
                    currentK--;
                }
                extraLeft = 0;
            }

            while (vowels == 5 && currentK == k && left < right && freq[0][word[left]] && freq[1][word[left]] > 1) {
                extraLeft++;
                freq[1][word[left++]]--;
            }

            if (currentK == k && vowels == 5) {
                response += (1 + extraLeft);
            }
        }

        return response;
    }
};