// given n friends from 1 to n
// find the paris that can be made by these friends with each other permutations are not to be counted.
// e.g. n = 3
//  ans = -- 1 - 2 -3
//      ---- 12 - 3
//      ---- 13 - 2
//      ---- 1 - 23
//      ---- 123


#include<iostream>
#include<vector>
using namespace std;

void getFriendsPairs(int crr, int n, vector<int> &dp ,string ans){
     if(crr > n){
          cout<<ans<<endl;
          return;
     }
     if(dp[crr] == 1){
          getFriendsPairs(crr + 1,n,dp,ans);
     }else{
          dp[crr]=1;
          getFriendsPairs(crr +1,n,dp,ans + "(" + to_string(crr) + ")");
          for(int i=crr + 1;i<=n;i++){
               if(dp[i] == 0){
                    dp[i] = 1;
                    getFriendsPairs(crr + 1,n,dp,ans+"("+to_string(crr)+to_string(i)+")");
                    dp[i] = 0;
               }
          }
          dp[crr]=0;

     }

}

int main(){
     int n = 3;
     vector<int> dp(4,0);
     getFriendsPairs(1,n,dp,"");
     return 0;
}