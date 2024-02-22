// given int n which represents a number of stairs give total number of paths 
// from which one can go down from nth stair to 0th stair by taking step of 1,2,3

#include<iostream>
#include<vector>
using namespace std;

int getStairPathsRecursively(int n ,int dp[11]){
     if(n < 0){
          return 0;
     }
     if(n == 0){
          return 1;
     }
     if(dp[n] != 0){
          return dp[n];
     }
     int ans1 = getStairPathsRecursively(n -1 , dp);
     int ans2 = getStairPathsRecursively(n -2 ,dp);
     int ans3 = getStairPathsRecursively(n -3 ,dp);
     int ans = ans1 + ans2 + ans3;
     dp[n] = ans;
     return ans;
}

int getStairsPathsTabulation(int n){
     vector<int> dp (n + 1,0);
     dp[0] = 1;
     dp[1] = dp[0];
     dp[2] = dp[0] + dp[1];

     for(int i = 3;i<=n;i++){
          dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
     }
     return dp[n];
}

int main(){
     int n=5;
     int dp[n+1] = {0};
     cout<<"1 = "<<getStairPathsRecursively(n , dp)<<endl;
     cout<<"2 = "<<getStairsPathsTabulation(n)<<endl;
     return 0;
}