class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int>A;
       for(auto s:S)
       {
           A[s]++;
       }
       for(auto s:S)
       {
           if(A[s]==1)
           {
               return s;
           }
       }
       return '$';
    }

};
