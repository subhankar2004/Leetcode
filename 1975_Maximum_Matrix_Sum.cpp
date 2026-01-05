#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int count=0;
        long long sum=0;
        int mini=1e9;
        int m=matrix[0].size();
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]<0){
                    count++;
                }
                mini=min(mini,abs(matrix[i][j]));
                sum+=abs(matrix[i][j]);
            }
        }

        if(count%2==1){
            sum-=(2*mini);
        }

        return sum;

    }
};

