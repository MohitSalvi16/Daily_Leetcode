class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {

        int distance=0;

        while(mainTank>=5){
        mainTank=mainTank-5;
        distance=distance+50;

        if(additionalTank>0){
            mainTank=mainTank+1;
            additionalTank--;
        }
        }

        distance=distance+mainTank*10;

        return distance;
        
    }
};