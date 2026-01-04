#include<vector>
using namespace std;

class Solution {
public:
vector<int> count;
vector<int> sum;

bool built=false;
void solve(){
    if(built)return;
    built=true;
    count.resize(1e5+1,1);
    sum.resize(1e5+1,1);
    for(int i=2;i<1e5;i++){
        for(int j=i;j<1e5;j+=i){
            count[j]++;
            sum[j]+=i;
        }
    }
}
    int sumFourDivisors(vector<int>& nums) {
        solve();
        int ans=0;
        for(int i:nums){
            if(count[i]==4){
                ans+=sum[i];
            }

        }
        return ans;
    }
};