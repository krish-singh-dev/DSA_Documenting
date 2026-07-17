class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1=0;
        int n=numbers.size()-1;
        int index2=n;
        int ans;
          while(0==0){
            ans=numbers[index1]+numbers[index2];
            if (ans==target){
               break;
            }
            else if(ans>target){
                index2--;
            }
            else{
                index1++;
            }

          }
          return{index1+1,index2+1};

    }
};