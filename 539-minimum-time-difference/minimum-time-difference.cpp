class Solution {
public:
    int converter(string s)
    {
        int hrs=std::stoi(s.substr(0,2));
        int min=std::stoi(s.substr(3,2));

        int total= hrs*60 + min;
        return total;
    }
    int findMinDifference(vector<string>& timePoints) {

        vector<int> v;

        for ( auto i : timePoints)
        {
            v.push_back(converter(i));
        }
        
        sort(v.begin(),v.end());
        for (auto i : v )
        {
            cout<< i <<endl;
        }

        int mindiff= INT_MAX;
        int n= v.size();

        for ( int i=1; i < v.size();i++)
        {
            mindiff= min(mindiff,v[i]-v[i-1]);

        }

        int circualdiff =1440 - v[n-1] + v[0];




        return min(mindiff,circualdiff);
    }
};