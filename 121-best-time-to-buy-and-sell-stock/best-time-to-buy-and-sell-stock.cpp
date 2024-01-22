class Solution {
public:
void finder(vector<int>& prices,int i ,int &min, int &max)
{
    if(i==prices.size())
    {
        return;
    }
    if(min>prices[i]) min= prices[i];
    int prof= prices[i]-min;
    if(prof>max)
    { max=prof;
    }

    finder(prices, i+1,min,max);


}
    int maxProfit(vector<int>& prices) {

        int min = INT_MAX;
        int max= INT_MIN;

        finder(prices,0,min,max);
        return max;




       
    }
};