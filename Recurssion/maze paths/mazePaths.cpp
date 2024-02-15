// given a maze of size m x n find and print all the paths form top left grid to bottom right grid

#include<iostream>
using namespace std;

void getMazePaths(int m,int n,int x,int y,string path){
     if(x==m && y==n){
          cout<<path<<endl;
          return;
     }
     if(x>m || y>n){
          return;
     }

     getMazePaths(m,n,x+1,y,path+'h');
     getMazePaths(m,n,x,y+1,path+'v');
     return;
}

int main(){
     int m = 3;
     int n = 3;
     getMazePaths(m,n,1,1,"");
     return 0;
} 