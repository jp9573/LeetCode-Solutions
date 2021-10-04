class Solution {
public:
    typedef long long ll;
    
    ll myAtoi(string st) {
        ll negflag=0;
        ll len=st.length();
        ll i=0;
        
        while(st[i]==' '){
            i++;
            len--;
        }
        if(len==0){
            return 0;
        }
        if(st[i]!='-' && st[i]!='+' && !(st[i]-'0'<=9 && st[i]-'0'>=0)){
            return 0;
        }
        if(st[i]=='-'){
            negflag=1;
            len--;
            i++;
        }
        else if(st[i]=='+'){
            negflag=0;
            len--;
            i++;
        }
        ll count=0;
        
        while(st[i]=='0' && i<st.length()){
            i++;
        }
        ll temp=i;
        while(st[i]>='0' && st[i]<='9' && i<st.length()){
            count++;
            i++;
        }
        cout << count <<endl;
        ll num=0;
        i=temp;
        if(count>10){
            if(negflag){
                return INT_MIN;
            }
            else{
                return INT_MAX;
            }
        }
        while(count>0){
            if(!(st[i]-'0'<=9 && st[i]-'0'>=0)){
                break;
            }
            num+=(ll)powl(10,count-1)*(st[i]-'0');
            if(negflag==1 && num>INT_MAX){
                return INT_MIN;
            }
            else if(negflag==0 && num>INT_MAX){
                return INT_MAX;
            }
            count--;
            i++;
        }
        if(negflag){
            return num*(-1);
        }
        else
            return num;
        
        
    }
};
