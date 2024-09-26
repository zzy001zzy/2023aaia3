#include <stdio.h>
int main(){
	int a[10];
	int n;
	int i=0;
	while(scanf("%d",&n)==1&&n){
		a[i++]=n;
	}
	scanf("%d",&n);
	int ans=0;
	while(i--){
		if(n==a[i]) ans++;
	}
	printf("%d\n",ans);
}