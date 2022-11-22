#include<stdio.h>

int ar[11][11];

int n;

 

 int issafe(int row,int col)

 {

   // coloumn check

   int count=0;

     for(int k=0;k<row;k++)

          if(ar[k][col]==1)

           return 0;

 

 //upper right diagnoal 

 int k=row; int l=col;

   while(k>=0&&l<n){

      if(ar[k][l]==1)

        return 0;

    k--; l++;   

   }

 

 //upper left diagnoal

 k=row; l=col;

 while(k>=0&&l>=0)

 {

    if(ar[k][l]==1)

        return 0;

 k--; l--;

 }

 

 return 1;

 }

 

int solve(int row)

{

 if(row>=n)

   return 1;

 

    for(int i=0;i<n;i++)

    {

       if(issafe(row,i))

         {ar[row][i]=1;

           if(solve(row+1))

            return 1;

            ar[row][i]=0;

          }

     }

     return 0;

 

}

void print1()

{

   for(int i=0;i<n;i++)

   {

       for(int j=0;j<n;j++)

       {

           printf("%d ",ar[i][j]);

       }

       printf("\n");

   }

}

 

int main()

{

scanf("%d",&n);

for(int i=0;i<n;i++)

   for(int j=0;j<n;j++)

    ar[i][j]=0;

 

if(solve(0))

   print1();

else

   printf("Not possible");

}
