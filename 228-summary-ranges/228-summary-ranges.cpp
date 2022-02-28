class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int n = nums.size();
		// if size happens to be  zero return empty string
        if(n == 0 )
                return v ;
        
		// assigning first element to a
        int start = nums[0];
        
        for(int i = 0; i<n; i++)
        {
			// if one of both is true
            if( i == n-1 || nums[i]+1 != nums[i+1])
            {
			    // if current element is not equals a
				// this means we have found a range.
                if(nums[i] != start)
                    v.push_back(to_string(start)+ "->"+ to_string(nums[i]));
					
				// this means we have reached to the end of string and now
				// we have to add a that should be the last element
                else
                    v.push_back(to_string(start));
						
				// checking  for this condition so that a got updated for next range
				// also n-1 so that a doesn't contain out of bound value
                if(i != n-1)
                    start = nums[i+1];
            }
        }
        return v;
    }
};