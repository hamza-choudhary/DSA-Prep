#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  // if we take a transpose and reverse the elements of all rows the matrix is flipped by 90 degree following method is difficult
  //write own small functions for rotate, match_matrix, etc
  bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    
    vector<int> matrix_1;
    vector<int> matrix_2;

    int m = mat.size();
    int n = m; //bcz both are same

    //Case 1: if element is only 1

    if (m == 1)
    {
      return (mat == target);
    }

    //? traversing along sides
    // 0->n
    for (int i=0; i<n; i++)
    {
      matrix_1.push_back(mat[0][i]);
      matrix_2.push_back(target[0][i]);
    }
    // 1->m
    for (int i=1; i<m; i++)
    {
      matrix_1.push_back(mat[i][m-1]);
      matrix_2.push_back(target[i][m-1]);
    }
    // 0<-m-1
    for (int i=m-2; i>=0; i--)
    {
      matrix_1.push_back(mat[n-1][i]);
      matrix_2.push_back(target[n-1][i]);
    }
    // n-1->1
    for (int i=n-2; i>=1; i--)
    {
      matrix_1.push_back(mat[i][0]);
      matrix_2.push_back(target[i][0]);
    }

    for (auto m: matrix_1)
    {
      cout << m << " ";
    }
    cout << endl;
    for (auto m: matrix_2)
    {
      cout << m << " ";
    }

    //?rotation
    ///we want to rotate 4 times bcs 4th time it will come back to its position
    for (int i=0; i<4; i++)
    {
      if (matrix_1 == matrix_2)
      {
        return true;
      }
      //rotation
      for (int j=0; j<n-1; j++)
      {
        matrix_1.insert(matrix_1.begin(), matrix_1.back());
        matrix_1.pop_back();
      }
    }

    return false;

  }
};


//! optimized approach
// class Solution {
// public:
    
//     bool clockwise(vector<vector<int>>& mat,vector<vector<int>>& target){
//          int n=mat.size();
// //Transpose
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i<j){
//                     swap(mat[i][j],mat[j][i]);
//                 }
//             }
//         }
// //Reverse
//         for(int i=0;i<n;i++){
//             reverse(mat[i].begin(),mat[i].end());
//         }
//                return (mat==target);
//     }
//     bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
//         bool a=clockwise(mat,target);//90 degree
//         bool b=clockwise(mat,target);//180 degree
//         bool c=clockwise(mat,target);//270 degree
//         bool d=clockwise(mat,target);//360 degree
//         if(a or b or c or d)
//             return true;
//         return false;
//     }
// };

int main()
{

  Solution s = Solution();

  vector<vector<int>> mat = {{1,1},{0,1}}; 
  vector<vector<int>> target = {{1,1},{1,0}};

  cout << boolalpha << endl;
  cout << s.findRotation(mat, target) << endl;
  

  return 0;
}