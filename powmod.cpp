#include<iostream>
using namespace std;
long long quick_mup(long long a,long long n,long long m){
	long long res=1%m,t=a;
	while(n){
		if(n&1) res=res*t%m;
		t=t*t%m;
		n>>=1;
	}
	return res;
}
int main(){
	long long a,n,m;
	scanf("%lld%lld%lld",&a,&n,&m);
	printf("%lld",quick_mup(a,n,m));
	return 0;
}
