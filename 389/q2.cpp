// Every character c counts as a substring in itself.
// Also the current character c can form a substring with all
// of the previous character c before it.
class Solution {
public:
    long long countSubstrings(string s, char c) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        long long count = 0;
        long long res = 0;

        for(auto ch : s){
            if(ch == c){
                res += 1 + count;
                count++;
            }
        }
        
        return res;
    }
};