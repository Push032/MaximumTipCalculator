#include <bits/stdc++.h>
using namespace std;

int COUNT(int A[], int B[], int i, int result, int RA, int RB, int CA, int CB, int size)
{
     if(i == size)
        return result;
        
     if(CA == RA)
          {
               result = COUNT(A,B,i+1,result+B[i],RA,RB,CA,CB+1,size);
          }
      else
         {
             if(CB==RB)
                result = COUNT(A,B,i+1, result+A[i], RA, RB, CA+1, CB, size);
             else
               {
                    
                          int temp1 = COUNT(A,B,i+1,result+B[i],RA,RB,CA,CB+1,size);
                          int temp2 = COUNT(A,B,i+1, result+A[i], RA, RB, CA+1, CB, size);
                          result = max(temp1, temp2);
                 
               }
         }
    return result;
}

int main()
{
     int i,j,t;
     cin>>t;
     for(i=0; i<t;i++)
       {
            int RA,RB;
            int size;
            cin>>size>>RA>>RB;
            int A[size];
            int B[size];
            for(j=0; j<size; j++)
               cin>>A[j];
            
            for(j=0; j<size; j++)
                cin>>B[j];
 
            int result = 0;
            cout<<COUNT(A, B, 0, 0, RA, RB, 0, 0, size)<<"\n";
       }
      
}
