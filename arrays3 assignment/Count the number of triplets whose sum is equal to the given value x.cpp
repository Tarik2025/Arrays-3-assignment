#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a)
{
    int n=a.size();
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
  vector<int> v;
  int n;
  cout<<"enter the size of array:";
  cin>>n;
  cout<<"enter the elemnts in the array:"<<endl;
  for(int i=0;i<n;i++)
  {
    int q;
    cin>>q;
    v.push_back(q);
  }
  cout<<"the array elemnts entered are:"<<endl;
  display(v);
  cout<<"Enter the target number"<<endl;
  int t;
  cin>>t;
  int count=0;
  for(int i=0;i<n;i++)
  {
  for(int j=i+1;j<n;j++)
  {
  for(int k=j+1;k<n;k++)
  {
    if((v[i]+v[j]+v[k])==t)
    count++;
  }
  }
  } 
  cout<<"the count is :"<<count<<endl;

}