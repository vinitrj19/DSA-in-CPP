/*
 * Problem Name: 3591. Check if Any Element Has Prime Frequency
 * Source: LeetCode
 * Difficulty: Easy
 * Time Complexity: O(n + k√n)
 * Space Complexity: O(k)
 */

class Solution {
private:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (int num : nums) {
            freq[num]++;
        }
        
        for (const auto& [num, count] : freq) {
            if (isPrime(count)) {
                return true;
            }
        }
        return false;
    }
};
