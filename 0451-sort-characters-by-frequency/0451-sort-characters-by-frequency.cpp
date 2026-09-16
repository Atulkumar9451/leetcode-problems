class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(256, 0);
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Lambda function with [&] capture clause se sort karo
        sort(s.begin(), s.end(), [&](char a, char b) {
            // Agar frequency same hai, toh character value ke base par preserve karo
            if (freq[a] == freq[b]) {
                return a < b;
            }
            // Higher frequency wala character pehle aayega
            return freq[a] > freq[b];
        });

        return s;
    }
};