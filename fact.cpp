#include<iostream>
using namespace std;
// function for calculating factorial
int fact(int n){
int i,j,arr[100000],c,s,carry;
arr[0]=1;
c=1;
carry=0;
for(i=1;i<=n;i++){
  for(j=0;j<c;j++){
   s=arr[j]*i+carry;
   arr[j]=s%10;
   carry=s/10;
 }
 while(carry>0){
   arr[c]=carry%10;
   carry=carry/10;
   c++;
  }
}
 for(i=c-1;i>=0;i--)
  cout<<arr[i];
cout<<endl;
}

//
int main(){
int a,ch;
do{
 // cout<<"hello\n";
  cout<<"Enter number for calculating factorial :";
  cin>>a;
  fact(a);
  cout<<"Enter 1 for calculating more no factorial :";
  cin>>ch;
}while(ch==1);
return 0;
}

