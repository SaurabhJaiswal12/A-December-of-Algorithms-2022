#include<bits/stdc++.h>
using namespace std;
#define max 100000

  
int valueOf(char symbol)
{
	switch(symbol)
	{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'A':
		case 'a': return 10;
		case 'B':
		case 'b': return 11;
		case 'C':
		case 'c': return 12;
		case 'D':
		case 'd': return 13;
		case 'E':
		case 'e': return 14;
		case 'F':
		case 'f': return 15;
		default:
		{
			printf("Cannot decode that symbol: %c", symbol);
			return -1;
		}
	}
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    

    int t,c_hex;
    cin>>t;
    
   
    while(t--)
    {
         char ans[max];
        char a;
        char str[max];
        int i=0,j=0;
        while(1)
        {
            cin>>a;
            if(a=='}')
            break;
            if(a==',' ||a==' '|| a=='{')
            {}
            else
            {

            str[i++]=a;
            cout<<str[i-1]; }
        
        }
           cout<<endl;
        for(int i=0;str[i]!='\0';i+=2)
        {
            c_hex=0;
                
                c_hex+=valueOf(str[i])*16;
                c_hex+=valueOf(str[i+1])*1;

                 
                

                
            
            if(c_hex>=65&& c_hex<=90)
            ans[j++]='A'+(c_hex-65);   
            else
            ans[j++]='a'+(c_hex-97);
        }
        for(int i=0;i<j;i++)
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}