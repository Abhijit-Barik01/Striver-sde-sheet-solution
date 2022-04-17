class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int>res; 
        long long t=1;
    res.push_back(t);
    for(int i=1;i<=rowIndex;i++)
    {
        t*=rowIndex+1-i;
        t/=i;
        res.push_back(t);
    }
    return res;
    }
};
