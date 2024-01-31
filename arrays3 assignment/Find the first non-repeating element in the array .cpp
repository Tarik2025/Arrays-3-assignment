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
  bool f;
  for(int i=0;i<n;i++)
  { f=false;
    for(int j=0;j<n;j++)
    {
        if(i==j)
        continue;
        if(v[i]==v[j])
        {
        f=true;
    }
    }

        if(f==false)
        {
            cout<<"unique elements is "<<v[i]<<endl;
            break;
        }
    
    
  }
  if(f==true)
  {
    cout<<"no unique element:"<<endl;
  }
  
}