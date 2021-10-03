#include <bits/stdc++.h>
using namespace std;


int maxdiff(vector<int> a){
    if(a.size()<2){
    return 0;
    }
int mini =a[0];
int maxa=0;

// Finding max and min value in the input array
for(int i =0; i<a.size();i++){
mini = min(mini,a[i]);
maxa = max(maxa,a[i]);
}
//making (length-1) buckets
int buckmin[(a.size()-1)];
int buckmax[(a.size()-1)];

fill_n(buckmin,(a.size()-1),INT_MAX);
fill_n(buckmax,(a.size()-1),-1);

// gap in each bucket
int interval = int(ceil((maxa-mini+0.0)/((a.size()-1))));

for(int i=0;i<a.size();i++){

// leaving the max min element and the iterating
if(a[i]==maxa || a[i]==mini ) continue;
int index;
// filling buckets and storing only max and min of each bucket
index = (a[i]-mini)/(interval);
buckmin[index]= min(a[i],buckmin[index]);
buckmax[index]= max(a[i],buckmax[index]);

}
// Finding maximum between maximum value
// of previous bucket and minimum of current bucket.
int prv = mini;
int max_gap=0;

for(int i=0;i<(a.size()-1);i++){

if(buckmax[i]==-1)continue;
max_gap=max(buckmin[i]-prv,max_gap);
prv= buckmax[i];

}
max_gap=max(maxa-prv,max_gap);
return max_gap;

}


int main() {

int n;
cin>>n;
vector<int> a;
int value;
for (int i=0;i<n;i++){
    cin>>value;
    a.push_back(value);
}
cout<<maxdiff(a)<<endl;

return 0;
}
