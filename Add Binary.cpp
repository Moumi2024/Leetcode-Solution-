class Solution {
    public:
        string addBinary(string a, string b) {
            int i = a.size() -1;           // '-1' using for start from the end ;
            int j = b.size() -1;
            int carry = 0;
            int sum = 0;
            string ans;
    
            while(i >= 0 || j >= 0)
            {
                sum = carry;              // in first sum or, carry both are same '0';
                if(i>=0)
                {
                    sum += (a[i]-'0');   // for convert char to integer ;
                    i--;                 // increment to the left side ;
                }
    
                if(j>=0)
                {
                    sum+=(b[j]-'0');
                    j--;
                }
    
                if(sum>1)
                {
                    ans += to_string(sum%2);
                    carry=1;
                }
                else
                {
                   carry = 0;
                   ans+= to_string(sum);
                }
            }
            if(carry == 1){
                ans+= ("1");
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
    };