	int isEularCircuit(int V, vector<int>adj[]){
	    // Code here
	     vector<int> degree(V,0);
        for(int i=0;i<V;++i){
            for(auto& val:adj[i]){
                degree[val]++;
            }
        }
        int odd_count=0;
        int even_count=0;
        for(auto& val: degree){
            
            if(val & 1) odd_count++;
            else        even_count++;
            
        }
        if(even_count==V) return 2;
        else if ((even_count==V-2) && odd_count==2) 
        {
            return 1;
            //as start node and end node is not same so they have odd degree.
        }
        else
        {
            return 0;
        }
	}
