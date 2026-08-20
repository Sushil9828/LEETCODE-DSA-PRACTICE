class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i, j , n=nums.size();
        vector<int> pos;
         vector<int> neg;
         for ( int i=0; i<n; i++){
            if (nums[i]>=0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
         }
        int ps = pos.size();
        int ns = neg.size();
         vector<int> arr;
        if (ps == 0){
            
            for (int k = 0 ; k<ns ; k++){
                arr.push_back(neg[k]*neg[k]);

            }
            std::reverse(arr.begin(), arr.end());
        }else if (ns == 0){
            for (int k=0; k<ps ; k++){
                arr.push_back(pos[k]*pos[k]);
            }
        }else{
            int s=0 , p=0;
             for (int k = 0 ; k<ns ; k++){
                neg[k]=neg[k]*neg[k];
               
            }
             std::reverse(neg.begin(), neg.end());
            for (int k=0; k<ps ; k++){
                pos[k]=pos[k]*pos[k];
            }
           
            int a=0 ;
            while (s<ps && p<ns){
                if (pos[s]<neg[p]){
                    arr.push_back(pos[s]);
                    
                    s++;
                }else{
                    arr.push_back(neg[p]);
                    
                    p++;
                }
                
            
            }
            for ( s ; s<ps ; s++){
                arr.push_back(pos[s]);
            }
            for (p ; p<ns ; p++){
                arr.push_back(neg[p]);
            }
        }
        
    return arr;
    }
};