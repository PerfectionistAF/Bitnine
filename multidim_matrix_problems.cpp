//compare to central element 
// Example program
#include <bits/stdc++.h>
using namespace std;

int main()
{
 const int rows=100;
 const int cols=100;
 int mat[rows][cols]={0};
 
 int i=(rows/2)-1;
 int j=(cols/2)-1;
 int count=0;
 
 for(int m=0;m=rows;m++)
 {
     for(int n=0;n<cols;n++)
     {
         srand(time(0));
         mat[m][n]=1+(rand()%100);
     }
 }
 if(mat[i][j]>mat[i-1][j-1] 
    && mat[i][j]>mat[i-1][j]
    && mat[i][j]>mat[i-1][j+1]
    && mat[i][j]>mat[i][j-1]
    && mat[i][j]>mat[i][j+1]
    && mat[i][j]>mat[i+1][j-1]
    && mat[i][j]>mat[i+1][j]
    && mat[i][j]>mat[i+1][j+1])
    
    count++;
    
    cout<<count;
}

// Example program
#include <bits/stdc++.h>
using namespace std;

int main()
{
 const int rows=100;
 const int cols=100;
 int mat[rows][cols]={0};
 
 //int i=(rows/2)-1;
 //int j=(cols/2)-1;
 int count=0;
  srand(time(0));
 for(int m=0;m<rows;m++)
 {
     for(int n=0;n<cols;n++)
     {
         mat[m][n]=1+(rand()%100);
     }
 }
 
  for(int i=0;i<rows;i++)
 {
     for(int j=0;j<cols;j++)
     {
         if(mat[i][j]>mat[i-1][j-1] 
    && mat[i][j]>mat[i-1][j]
    && mat[i][j]>mat[i-1][j+1]
    && mat[i][j]>mat[i][j-1]
    && mat[i][j]>mat[i][j+1]
    && mat[i][j]>mat[i+1][j-1]
    && mat[i][j]>mat[i+1][j]
    && mat[i][j]>mat[i+1][j+1])
    
    count++; 
     }
 }

    
    cout<<count;
}
