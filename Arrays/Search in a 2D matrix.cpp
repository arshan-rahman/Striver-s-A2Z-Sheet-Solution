#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target){
    int n = mat.size(); //number of rows
    int m = mat[0].size();

    //Binary Search

    int low = 0;
    int high = n*m-1;

    while(low<=high){
        int mid = low + (high-low)/2;

        //coverting 1D to 2D

        int row = mid/m;
        int col = mid%m;

        //Binary Search Opertion
        if(mat[row][col]==target){
            return true;
        } else if(mat[row][col]<target){
            low = mid+1;
        } else if(mat[row][col]>target){
            high = mid-1;
        } 
        return false;
    }
}

int main(){
    int a,b;
    cout<<"Enter the number of rows : ";
    cin>>a; //rows

    cout<<"Enter the number of column : ";
    cin>>b; //column

    vector<vector<int>> mat(a, vector<int>(b)); //matrix formation

    // Matrix rows and column valyes insertion

    for(int i=0; i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat[i][j];
        }

        int target; //key element to find int the array
        cout<<"Enter the vlaue of element you want to find : ";
        cin>>target;

        //calling the function
        cout<<(searchMatrix(mat,target) ? "Found" : "Not Found"); //terniary operation
        return 0;
    }

}
