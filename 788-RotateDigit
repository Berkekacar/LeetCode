class Solution {
public:
    bool isGood(int n){
        bool isDifferent = false;
        while(n>0){
            int last = n%10;
            
            if(last==2 || last==5 || last==6 || last==9){
                isDifferent = true;
            }else if(last==0 || last==1 || last==8){
                //pass
            }else{
                return false;
            }
            n/=10;
        }
        return isDifferent;
    }
    int rotatedDigits(int N) {
        int ans = 0;
        
        for(int n = 1; n <=N ; n++){
            if(isGood(n)){
                ans++;
            }
        }
        return ans;
    }
};
