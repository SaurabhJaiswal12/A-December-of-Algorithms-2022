#include<bits/stdc++.h>
using namespace std;

int main()
{
   string name;
   cin>>name;
   
   int l=name.size();
   char c_name[l+1];
   c_name[0]=name[l-4];\
   

   c_name[1]=name[l-3];
   
   int j=2;
   for(int i=0;i<l-4;i++)
   {
     c_name[j++]=name[i];
   }
   for(int i=0;i<j;i++)
   cout<<c_name[i];


}
