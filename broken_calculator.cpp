class Solution {
public:

    int brokenCalc(int startvalue, int target) { 
        set<int>vis;
        queue<pair<int,int>>q;
         if(startvalue==target)
       return 0;
   if(startvalue>target)
       return startvalue-target;
        q.push(make_pair(startvalue,0));
        while(!q.empty())
        {
            int value=q.front().first;
            int lev=q.front().second;
            q.pop();
            if(value==target)
            {
                return lev;
            }
            vis.insert(value);
            if(value-1==target || value*2==target)
            {
                return lev+1;
            }
            if(vis.find(value-1)==vis.end())
            {
                q.push(make_pair(value-1,lev+1));
            }
            if(vis.find(value*2)==vis.end())
            {
                q.push(make_pair(value*2,lev+1));
            }
        }
        return 0;
    }
};
