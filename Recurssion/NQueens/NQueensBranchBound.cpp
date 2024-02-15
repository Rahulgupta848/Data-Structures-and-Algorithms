#include<iostream>
#include<vector>
using namespace std;

void getQueensPosition(int n , int row,vector<bool> cArr,vector<bool> rdArr,vector<bool> ldArr, string ans){
     if(row == n){
          cout<<ans<<endl;
          return;
     }
     for(int col = 0; col<n; col++){
          int colIdx = col;
          int rdIdx = row + col;
          int ldIdx = row - col + n-1;
          if(cArr[colIdx] == false && rdArr[rdIdx] == false && ldArr[ldIdx] == false){
               cArr[colIdx] = true;
               rdArr[rdIdx] = true;
               ldArr[ldIdx] = true;
               getQueensPosition(n , row+1, cArr, rdArr,ldArr,ans+to_string(row)+","+to_string(col)+" - ");
               cArr[colIdx] = false;
               rdArr[rdIdx] = false;
               ldArr[ldIdx] = false;
          }
     }
}

int main(){
     int n = 4;
     vector<bool> colArr(n);
     vector<bool> rdArr(2*n-1);
     vector<bool> ldArr(2*n-1);
     getQueensPosition(n,0,colArr,rdArr,ldArr,"");
     return 0;
}