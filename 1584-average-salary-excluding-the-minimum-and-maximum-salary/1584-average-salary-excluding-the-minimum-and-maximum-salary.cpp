class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0;
        int n=salary.size();
        for(int i=1;i<n-1;i++){
            sum+=salary[i];
        }
        sum=sum/(n-2);
        return sum;
    }
};