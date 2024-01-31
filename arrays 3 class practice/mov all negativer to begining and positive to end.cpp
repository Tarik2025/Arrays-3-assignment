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
  //two pass method
  int i=0;
  int j=n-1;
  while(i<j)
  {
    if(v[i]<=0)i++;
    if(v[j]>=0)j--;
    else if(v[j]<=0 && v[i]>=0)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
       i++;
       j--;
    }
    
  }
  cout<<"The modified array is :"<<endl;
  display(v);
}