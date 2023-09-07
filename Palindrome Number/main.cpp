class Solution {
public:
    bool isPalindrome(int x) {
        //set bool to false
        bool output = false;
        //convert x into a string
        string num = to_string(x);
        // get size 
        int len = num.size();
        //get the size minus the null pointer
        int n = len - 1;
        int i = 0;
        // create a new string 
        while(i <= n){
            if(num[i] == num[n]){
                output = true;
                n--;
                i++;
            } 
            else{
                output = false;
                break;
            }
        }
        return output;
    }
};