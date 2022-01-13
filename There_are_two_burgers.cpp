#include<iostream>

using namespace std;

int main()
{
    int no_query;
    cin>>no_query;

    int item[100][3];
    int price[100][2];
    int max_price[no_query];

   for(int i=0;i<no_query;i++)
   {
       for(int j=0;j<3;j++)
       {
           cin>>item[i][j];
       }
       for(int k=0;k<2;k++)
        cin>>price[i][k];
   }

     for(int i=0;i<no_query;i++)
     {
         int buns=item[i][0];
         int beef=item[i][1];
         int chicken=item[i][2];
         int prices=0;
         while(buns>=2 && (beef>0 || chicken>0)){

              if(buns>=2 && beef>0 && chicken<=0){
                prices+=price[i][0];
                buns-=2;
                beef--;
             }
             else if(buns>=2 && beef<=0 && chicken>0){
                 prices+=price[i][1];
                  buns-=2;
                  chicken--;
             }

             else if(buns>=2 && beef>0 && chicken>0)
             {
                 if(price[i][0]>price[i][1])
              {
                  prices+=price[i][0];
                  buns-=2;
                  beef--;
              }
              else if(price[i][1]>price[i][0])
              {
                  prices+=price[i][1];
                  buns-=2;
                  chicken--;
              }
              else if(price[i][0]==price[i][1])
              {
                  prices+=price[i][1];
                  buns-=2;
                  chicken--;
              }
             }



         }

         cout<<prices<<endl;
     }
}
