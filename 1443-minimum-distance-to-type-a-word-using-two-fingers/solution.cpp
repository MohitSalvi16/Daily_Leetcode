class Solution {
public:

    pair<int , int > getCord(char ch){
        int curr=ch-'A';
        return {curr/6,curr%6};
    } 

    int getDist(int x1, int y1,int x2,int y2){
        return abs(x1-x2)+abs(y1-y2);
    } 
    int solve(string &word,int i,int x1,int y1,int x2,int y2){

    if(i>=word.length()){
        return 0;
    }
    auto [x,y]=getCord(word[i]);
  
    if(x1==-1 && y1==-1 && x2==-1 && y2==-1){
        
      return solve(word,i+1,x,y,x2,y2);  
    } 

    if(x2==-1 && y2==-1){
        int moveF2=solve(word,i+1,x1,y1,x,y);
        int moveF1=getDist(x1,y1,x,y)+solve(word,i+1,x,y,x2,y2);
        return min(moveF2,moveF1);
    }
    
    
    int moveF1=getDist(x1,y1,x,y)+solve(word,i+1,x,y,x2,y2);
    int moveF2=getDist(x,y,x2,y2)+solve(word,i+1,x1,y1,x,y);
    return min(moveF1,moveF2);

    }


    int minimumDistance(string word) {
        return solve(word,0,-1,-1,-1,-1);
    }
};