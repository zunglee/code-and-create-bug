class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi  = 0 , x=0 ;
        map<char , int > h;
        int len = s.length();
        for(int i=0 ; i<len;i++){
            
            if(h.count(s[i])){
                int preIndex =  h[s[i]];
                if(x <= preIndex){
                    
                    maxi = max(maxi , i-x);
                  
                    x=preIndex+1;
                }
         }
            h[s[i]] = i;
        }
        maxi = max(maxi ,len-x);
        return  maxi;
    }
};
