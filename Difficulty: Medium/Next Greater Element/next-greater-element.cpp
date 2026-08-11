class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>str;
        int n=arr.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            while(!str.empty()&&arr[i]>arr[str.top()])
            {
                ans[str.top()]=arr[i];
                str.pop();
            }
            str.push(i);
        }
        return ans;
    }
};