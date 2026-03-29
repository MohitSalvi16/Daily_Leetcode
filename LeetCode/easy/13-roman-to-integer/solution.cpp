class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        
     mp.insert(pair<char,int>('I',1));
     mp.insert(pair<char,int>('V',5));
     mp.insert(pair<char,int>('X',10));
     mp.insert(pair<char,int>('L',50));
     mp.insert(pair<char,int>('C',100));
     mp.insert(pair<char,int>('D',500));
     mp.insert(pair<char,int>('M',1000));
        
        int sum=0;
        int num=0;
        int len=s.length();
        for(int i=0;i<len;){
            if(i==len-1 || mp[s[i]]>=mp[s[i+1]]){
                num=mp[s[i]];
                i++;
            }
            else{
                num=mp[s[i+1]]-mp[s[i]];
                i=i+2;
            }
            sum=sum+num;
        }
        return sum;
    }
};