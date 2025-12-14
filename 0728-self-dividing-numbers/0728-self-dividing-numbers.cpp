class Solution 
{
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> result;
        while (left <= right)    
        {
            bool isSelfDividing = true;

            int temp=left;

            while(temp>0)
            {
                int digit=temp%10;

                if(digit==0) 
                {
                    isSelfDividing=false;
                    break;
                }
                else if(left%digit!=0) 
                {
                    isSelfDividing=false;
                    break;
                }
                temp/=10;
            }

            if (isSelfDividing) 
            {
                result.push_back(left);
            }
            left++;
        }
        return result; 
    }
};