#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    char  a[n][n];
    int b[n][n];
    // vector<vector<string>> a(n);
    char var,c_sq_open, new_,space,temp,c_sq_close , c_p_open,c_p_close,c_coma;
    for(int i=0;i<n;i++)
    {
        cin>>c_sq_open;
        for(int j=0;j<n;j++)
        {
                 cin>>c_p_open;
                 cin>>a[i][j];
                //  a[i].push_back(temp);
                //  cout<<a[i][j];
                 cin>>c_p_close;
                 if(j<(n-1))
                 {
                    cin>>var;
                    // cin>>space;
                    //  cin>>space;
                 }

        }
         cin>>c_sq_close;
         if(i<(n-1))
         {
         cin>>c_coma;
        //  cin>>new_;
         }
   

    }

    // for(vector<char> v:a)
    // {
    //     for(char x : v)
    //     {
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             if(a[i][j]!='#')
                b[i][j]=0;
             else
             {
                b[i][j]=-1;

             } 
            //   cout<<"0";
            //  cout<<a[i][j];
            // cout<<" ";
        }
        // cout<<endl;

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(b[i][j]==-1)
        {
            if((i-1) >=0 && b[i-1][j]!=-1)
               b[i-1][j]++;
            if((i-1) >=0 && (j-1)>=0 && b[i-1][j-1]!=-1)
            b[i-1][j-1]++;
            if((i-1) >=0 && (j+1)<n && b[i-1][j+1]!=-1 )
            b[i-1][j+1]++;
            if((j-1) >=0 && b[i][j-1]!=-1 )
            b[i][j-1]++;
             if( (j+1)<n && b[i][j+1]!=-1)
             b[i][j+1]++;
              if((j-1) >=0 && (i+1)<n && b[i+1][j-1]!=-1)
            b[i+1][j-1]++;
             if( (i+1)<n && b[i+1][j]!=-1) 
             b[i+1][j]++;
              if((j+1) <n && (i+1)<n &&b[i+1][j+1]!=-1)
              b[i+1][j+1]++;  
        
        }

        }
    }
     cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"[";
        for(int j=0;j<n;j++)
        {
           cout<<"\"";
           if(b[i][j]!=-1)
             cout<<b[i][j];
            else
            cout<<"#";

            cout<<"\"";
            if(j<(n-1))
            {
                cout<<",";
                cout<<" ";
            }
        }
        cout<<"]";
        if(i<(n-1))
        {
            cout<<",";
            cout<<endl;
        }
    }

// char a;
// cin>>a;
// cout<<endl<<a;




    return 0;

}
