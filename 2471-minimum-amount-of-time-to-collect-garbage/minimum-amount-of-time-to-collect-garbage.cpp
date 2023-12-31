class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickp=0,pickm=0,pickg=0;
        int total;

        int travelp=0,travelg=0,travelm=0;
        int lastp=0,lastm=0,lastg=0;

        for( int i=0; i < garbage.size();i++)
        {
            for(auto j : garbage[i])
            {
                if(j=='P')
                {
                    pickp++;
                    lastp=i;

                }
               else if(j=='M')
                {
                    pickm++;
                    lastm=i;
                }
                else if(j=='G')
                {
                    pickg++;
                    lastg=i;
                }
            }
        }
        
        for( int i =0; i<lastp; i++)
        {
            travelp+=travel[i];
        }
         for( int i =0; i<lastm; i++)
        {
            travelm+=travel[i];
        }
         for( int i =0; i<lastg; i++)
        {
            travelg+=travel[i];
        }

        total = pickp+pickm+pickg+travelp+travelg+travelm;
        return total;

    }
};