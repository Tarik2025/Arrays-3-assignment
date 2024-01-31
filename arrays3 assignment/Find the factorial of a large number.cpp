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
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(v[i]>v[j])
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
  }
  
  cout<<"\nthe sorted array elements are :\n";
  display(v);
  int fact=1;
  for(int i=2;i<=v[n-1];i++)
  {
    fact*=i;
  }
  cout<<"\nthe factorial of "<<fact<<endl;
}
