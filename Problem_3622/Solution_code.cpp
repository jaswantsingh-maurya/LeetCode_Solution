#include <iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0,product=1,a=0,t=0;
        t=n;
        while(n!=0)
        {
            a=(n%10);
            sum=sum+a;
            product = product * a;
            n=n/10;
        }
        
        int total = sum + product ;           
        if(total==0) return false;
        if(t % total ==0 )
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main(){
    Solution s;
    cout<<s.checkDivisibility(23)<<endl;
    cout<<s.checkDivisibility(99)<<endl;
    return 0;
}