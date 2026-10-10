#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0) return false;
                
        int t=x,a,m=0;
        while(x!=0)
        {
            a=x%10;
            m=(m*10)+a;
            x=x/10;
        }
       
        if(m==t)
            return true;
        else
            return false;
        
       
     }
};

int main()
{
    Solution s;
    cout<<s.isPalindrome(121);
    cout<<endl<<s.isPalindrome(10);

    return 0;
}
