#include<iostream>
#include<string.h>
define cout c
using namespace std;
class Solution {
public:
    bool checkZeroOnes(string str) {
        string s=str;
         int count1=0,max1=0,count0=0,max0=0;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='1')
        {   count0=0;
            count1++;

            if(count1>max1)
            {
                max1=count1;
            }

        }
        else
        {
            count1=0;
            count0++;
             if(count0>max0)
            {
                max0=count0;
            }


        }
    }
    if(max1>max0)
        return 'true';
    else
        return 'false';

    }
};
int main()
{   string str;
    cin>>str;
    Solution s1;
    cout<<s1.checkZeroOnes(str);

}
