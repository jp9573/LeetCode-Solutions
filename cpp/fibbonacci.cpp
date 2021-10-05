#include<iostream>
using namespace std;

void fibbonacci(int n){
      int num1=0;
      int num2=1;
 
      int sum=0;
      for (int i=1;i<=n;i++){
            cout<<num1<<" ";
            sum=num1+num2;
            num1=num2;
            num2=sum;
      }
      return;
}

int main(){
    cout<<"Enter the number of terms of fibbonacci series: ";
    int term;
    cin>>term;

    fibbonacci(term);
    return 0;
}
