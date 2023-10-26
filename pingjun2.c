#include<stdio.h>
int main(){
	int h;
	scanf("%d",&h);
	for(h;h>=1;h-=1){
	int m,n;
	scanf("%d%d",&m,&n);
	int i[100],a=0;
	float b=0.0,c=0.0;
	for(a=0;a<=m-1;a+=1){
	scanf("%d",&i[a]);
	if(i[a]>n){
	b=b+i[a];
	c+=1;}
	}
	if(b>0){
	printf("%.2f\n",b/c);
	}
	else{printf("-1\n");}
	}
return 0;
}

