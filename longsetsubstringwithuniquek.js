/**
 * @param {string} s
 * @param {number} k
 * @returns {number}
 */
class Solution {
    longestKSubstr(s, k) {
        let low = 0;
        let res = 0;
        let freq = new Map();

        for (let high = 0; high < s.length; high++) {

            // Add right character
            let key = s[high];
            freq.set(key, (freq.get(key) || 0) + 1);

            // Shrink from left
            while (freq.size > k) {
                let leftChar = s[low];

                freq.set(leftChar, freq.get(leftChar) - 1);

                if (freq.get(leftChar) === 0) {
                    freq.delete(leftChar);
                }

                low++;
            }

            // Exactly k unique characters
            if (freq.size === k) {
                let len = high - low + 1;
                res = Math.max(res, len);
            }
        }

        return res === 0 ? -1 : res;
    }
}
