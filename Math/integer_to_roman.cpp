class Solution {
public:
    string intToRoman(int num) {
        vector<int>values{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>symbols{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        
        for(int i=0; i<values.size() and num > 0 ; i++){
            while(i < values.size() and values[i] <= num){
                num -= values[i];
                ans += symbols[i];
            }
        }
        return ans;
        
    }
};