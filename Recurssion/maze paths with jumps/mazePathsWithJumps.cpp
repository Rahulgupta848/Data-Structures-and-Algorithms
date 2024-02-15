#include<iostream>
using namespace std;

void getMazePathsWithJumps(int row,int col,int x, int y, string path){
     if(x == row && y== col){
          cout<<path<<endl;
          return;
     }
     if(x>row || y>col){
          return ;
     }

     // move horizontally
     for(int i=1;i<= col-y;i++){
          getMazePathsWithJumps(row,col,x,y+i,path+'h'+to_string(i));
     }

     // move vertically
     for(int i=1;i<= row-x;i++){
          getMazePathsWithJumps(row,col,x+i,y,path+'v'+to_string(i));
     }

     //move diagonally
     for(int i=1;i<= col-y && i<=row-x;i++){
          getMazePathsWithJumps(row,col,x+i,y+i,path+'d'+to_string(i));
     }

     return;
}

int main(){
     int row = 5;
     int col = 5;

     getMazePathsWithJumps(row,col,1,1,"");
     return 0;
}