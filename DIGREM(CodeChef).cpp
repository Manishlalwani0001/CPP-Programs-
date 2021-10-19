#include <iostream>
#include<cstring>
#include<math.h>
#include<cstdlib>
using namespace std;
 
 long int find_num(string N,int j)       
{
    long int P;
    string S={};
   long int i;
    for(i=j+1;i<N.length();i++)
    {
        S=S+N[i];
    }
    P=stoi(S);
    return(P);
}

int main()
{
     int T,i,j,digit;
    long int M;
    
    string N;
    
    cout<<"enter the value of T";
    cin>>T;
    for(i=0;i<T;i++)
    {
        int p=-1;
        long int Q,num=0;
        int num1;
        char D; int value=0;
        cout<<"enter the value of N and D"<<endl;
        cin>>N>>D;
         
        num1=stoi(N);
        
        for(j=0;j<N.length();j++)
        {
            
            p++;
            if(N[j]==D)
            {
              
                digit=((N.length()-1)-j);
                M=pow(10,digit);
             
            
            
              if(j<(N.length()-1))
              {
                  
              
              num=  M-find_num(N,j);
              }else{
                  num=1;
              }
            
            Q=num1+num;
            N=to_string(Q);
            
            
            break;
            }
            
            
        }
      
        for(j=p+1;j<N.length();j++)
        {
            
             if(N[j]==D)
         {
             digit=((N.length()-1)-j);
                M=pow(10,digit);
                value=value+M;
         }
        }  
        cout<<(value+num)<<endl;
         
    }

    return 0;
}
