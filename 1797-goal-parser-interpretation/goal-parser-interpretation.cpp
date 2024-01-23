class Solution {
public:
    string interpret(string command) {
        string ans=""; 

        for(int i=0; i< command.length(); i++)
        {
            cout << command[i] << "-";
            if(command[i]=='G')
            ans.push_back('G');
            else if(command[i]=='(')
            {
                if(command[i+1]=='a')
                {
                ans+="al";
                i+=3;
                }
                else if(command[i+1]=')')
                {
                ans.push_back('o');
                i=i+1;
                }




            }
            

        }
        return ans;
        
    }
};