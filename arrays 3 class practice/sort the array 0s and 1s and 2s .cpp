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
  //method 1
  // dutch flag or pointer
  int l=0;
  int m=0;
  int h=n-1;
  while (m <= h) {
    if (v[m] == 2) {
        int temp = v[m];
        v[m] = v[h];
        v[h] = temp;
        h--;
    } else if (v[m] == 0) {
        int temp = v[m];
        v[m] = v[l];
        v[l] = temp;
        l++;
        m++;
    } else {
        m++;
    }
}
  cout<<"after  sorting the array elements "<<endl;
  display(v);
}