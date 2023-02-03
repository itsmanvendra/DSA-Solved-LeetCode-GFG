//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    void dir(char &direction, int &indexX, int &indexY, bool change){
        if(direction == 'r' && change){
            direction = 'd';
            indexX = indexX+1;
            
        }
        else if(direction == 'r' && change == false){
            // direction = 'r';
            indexY += 1;
        }
        else if(direction == 'd' && change){
            direction = 'l';
            indexY = indexY-1;
        }
        else if(direction == 'd' && change == false){
            // direction = 'd';
            indexX += 1;
        }
        else if(direction == 'l' && change){
            direction = 'u';
            indexX = indexX-1;
        }
        else if(direction == 'l' && change == false){
            
            indexY -= 1;
        }
        else if(direction == 'u' && change){
            direction = 'r';
            indexY = indexY+1;
        }
        else if(direction == 'u' && change == false){
            indexX -= 1;
        }
    }
    
    void solve(vector<vector<int>> &matrix, int R, int C, int &ansx, int &ansy, int indexX, int indexY, char direction){
        //Base Condition;
        if(indexX >= R || indexX < 0 || indexY >= C || indexY < 0){
            return;
        }
        if(matrix[indexX][indexY] == 0){
            ansx = indexX;
            ansy = indexY;
            //dir
            dir(direction, indexX, indexY, false);
            
        }
        else{
            matrix[indexX][indexY] = 0;
            ansx = indexX;
            ansy = indexY;
            dir(direction, indexX, indexY, true);
        }
        solve(matrix, R, C, ansx , ansy, indexX, indexY, direction);
    }
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        int ansx = 0;
        int ansy = 0;
        int indexX = 0;
        int indexY = 0;
        char direction = 'r';
        solve(matrix, R, C, ansx, ansy, indexX, indexY, direction);
        pair<int, int> p = make_pair(ansx, ansy);
        return p;
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends