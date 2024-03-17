// Use a hashmap to tally the 2 char words. Then use reverse
// function to reverse string. Then check for the 2 char word
class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_map<string, int> A;
        string temp;
        for(int i = 0; i < s.length() - 1; ++i){
            temp = "";
            temp += s[i];
            temp += s[i + 1];
            A[temp] = 1;
        }
        
        reverse(s.begin(), s.end());
        
        for(int i = 0; i < s.length() - 1; ++i){
            temp = "";
            temp += s[i];
            temp += s[i + 1];
            if(A[temp]){
                return true;
            }
        }
        
        
        
        return false;
    }
};