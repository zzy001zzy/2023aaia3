#include <iostream>
using namespace std;
int a[100][100];
int main(){
	int T,N;
	cin>>T;
	for(int t=1;t<=T;t++){
		char c,c2;
		cin>>c>>c2>>N;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a[i][j];
			}
		}
		int ans=1;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				if(a[i][j]!=a[N-1-i][N-1-j]||a[i][j]<0)
					ans=0;
					break;
			}
		}
		if(ans)cout<<"Test #"<<t<<": Symmetric.\n";
		else cout<<"Test #"<<t<<": Non-symmetric.\n";
	}
}