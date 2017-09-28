#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	bool first=true;
	while(scanf("%d %d",&n,&m)==2){
		if(first) first=false;
		else printf("\n");
		vector<int> sum(n+m+1,0);
		int ma=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				ma=max(ma,++sum[i+j]);
			}
		}
		for(int i=0;i<=n+m;i++){
			if(sum[i]==ma) printf("%d\n",i);
		}

	}

	return 0;
}