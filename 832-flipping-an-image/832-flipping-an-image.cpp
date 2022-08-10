class Solution {
public:
    void reverse(vector<int>& arr)
    {
        int start = 0, end = arr.size()-1, temp = 0;
        
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            
            start++;
            end--;
        }
    }
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i = 0;
        
        for(i = 0; i < image.size(); i++)
        {
            reverse(image[i]);
        }
        
        for(i = 0; i < image.size(); i++)
        {
            for(int j = 0; j < image[i].size(); j++)
            {
                image[i][j] = image[i][j] ^ 1;
            }
        }
        
        return image;
    }
};