#include<iostream>
#include<vector>
using namespace std;

bool isQueenSafe(vector<vector<int>>board,int n,int row, int col){
     //checking vertically
     for(int i=row-1;i>=0;i--){
          if(board[i][col] == 1){
               return false;
          }
     }

     //checking diagonal upper right
     for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
          if(board[i][j] == 1){
               return false;
          }
     }

      //checking diagonal upper left
     for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
          if(board[i][j] == 1){
               return false;
          }
     }

     return true;
}

void getQueensPositions(vector<vector<int>>board,int n,int row,string ans){
     if(row == n){
          cout<<ans<<endl;
          return;
     }
     for(int col=0;col<n;col++){
          if(isQueenSafe(board,n,row,col)){
               board[row][col] = 1;
               getQueensPositions(board,n,row+1,ans+to_string(row)+","+to_string(col)+" - ");
               board[row][col] = 0;
          }
     }
}

int main(){
     int n = 4;
     vector<vector<int>> board(n,vector<int>(n,0));
     getQueensPositions(board,n,0,"");
     return 0;
}