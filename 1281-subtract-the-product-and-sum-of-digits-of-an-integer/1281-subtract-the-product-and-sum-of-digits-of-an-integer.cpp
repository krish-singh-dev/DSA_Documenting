class Solution {
public:
    int subtractProductAndSum(int n) {
   int Sum=0,Mult=1,i;
    while(n>0)
    {
        
        i=n%10;
        Sum=Sum+i;
        Mult=Mult*i;
        n=n/10;
       
    }
     int answer=Mult-Sum;
        return answer;   
    }
 
};