#include <iostream>
#include <vector>
using namespace std;

void print2DMatrix(vector<vector<int>>);

int mineDriller(vector<vector<int>> mine,vector<vector<int>> &dp,int i,int j){
     dp[i][j] = 0;
     int crrGold = mine[i][j];
     if(i+1 < mine.size() && dp[i+1][j] != 0){
          int ans = mineDriller(mine,dp,i+1,j);
          crrGold += ans;
     }
     if(i-1 >=0 && dp[i-1][j] != 0){
          int ans = mineDriller(mine,dp,i-1,j);
          crrGold += ans;
     }
     if(j+1 < mine[0].size() && dp[i][j+1] != 0) {
          int ans = mineDriller(mine,dp,i,j+1);
          crrGold += ans;
     }
     if(j-1 >=0 && dp[i][j-1]!=0){
          int ans = mineDriller(mine,dp,i,j-1);
          crrGold += ans;
     }

     return crrGold;
}

void print2DMatrix(vector<vector<int>> arr){
     for(int i=0;i<arr.size();i++){
          for(int j=0;j<arr[i].size();j++){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }
}


int getMaxGold(vector<vector<int>> mine){
     vector<vector<int>> dp = mine;
     int maxgold = 0;
     for(int i=0;i<mine.size();i++){
          for(int j =0 ;j<mine[i].size();j++){
               if(dp[i][j] != 0){
                    int ans = mineDriller(mine,dp,i,j);
                    maxgold = max(maxgold,ans);
               }
          }
     }
     //int ans = mineDriller(mine,dp,0,0);
     return maxgold;
}

int main()
{
     vector<vector<int>> mine1 = {{10, 0, 100, 200, 0, 8, 0},
                                 {20, 0, 0, 0, 0, 60, 0},
                                 {30, 0, 0, 9, 12, 3, 4},
                                 {4, 0, 2, 5, 8, 3, 11},
                                 {0, 0, 0, 0, 0, 9, 0},
                                 {5, 6, 7, 0, 7, 4, 2},               
                                 {8, 9, 10, 0, 1, 10, 8}};

      vector<vector<int>> mine2 = {{0,6,0},
                                   {5,8,7},
                                   {0,9,0}};

     cout<<getMaxGold(mine1)<<endl;
     cout<<getMaxGold(mine2)<<endl;

     return 0;
}
