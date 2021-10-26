Link of Problem:

https://leetcode.com/problems/permutation-sequence/

#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vi vector<int>
#define vp vector<pi>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define POB pop_back 
#define f(i,x,z) for(ll i=x;i<z;i++)
#define debug(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define clr(x) memset(x, 0, sizeof(x)) 
#define setall(x,a) memset(x, a, sizeof(x))
#define INF 1000000000000000003 
#define mathpi 3.141592653589793238 
#define F first;
#define S second;
#define vpair vector<pair<ll,ll>>
#define vpairs vector<pair<string,string>>
#define tin tuple<ll,ll,ll>
#define rev(i,x,z) for(ll i=x;i>=z;i--)  
#define ld long double 
#define print(v) for(auto x:v){cout<<x<<" ";}cout<<"\n"; 
#define print_pair(v) for(auto x:v){cout<<x.first<<" "<<x.second<<" ";}cout<<"\n"; 
#define nline "\n"
#define nl "\n"
int fact(int n)
{
    int ans=1;
    f(i,2,n+1)
    {
        ans*=i;
    }
    return ans;
}
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v1(9);
        f(i,0,9)
        {
            v1[i]=i+1;
        }
        string s="";
        ll n1=n;
        f(i,0,n1)
        {
            int blocks=fact(n)/n;
            int val=k/(fact(n-1));
            if(k%fact(n-1)!=0)
            {
                val++;
            }
            vector<int>::iterator it;
            it = v1.begin()+val-1;
            k-=(val-1)*blocks;
            s+=(*it)+48;
            v1.erase(it);
            n--;
        }
        return s;
    }
};
