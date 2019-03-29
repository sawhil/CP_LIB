int vis[10000];

int bfs(vector<int> adjl[],int vertex,int dest){
	queue<int> q;
	vis[vertex] = 1;
	q.push(vertex);
	while(!q.empty()){
		int k = q.front();
		if(k == dest) return 1;
		q.pop();
		for(int i = 0;i<adjl[k].size();i++){
			if(!vis[adjl[k][i]]){
				vis[adjl[k][i]] = 1;
				q.push(adjl[k][i]);
			}
		}
	}
	return 0;
}
