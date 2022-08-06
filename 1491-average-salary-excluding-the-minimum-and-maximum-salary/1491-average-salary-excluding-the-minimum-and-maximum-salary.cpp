class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        
        double sum = accumulate(salary.begin(), salary.end(), 0.0);
        int n = salary.size();
        sum = sum - salary[0] - salary[n-1];
        return sum/(n-2);
    }
};