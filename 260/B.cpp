int a[1010],b[1010];
int flag[1010];
int main(){
	int n,x,y,z;
	scanf("%d%d%d%d",&n,&x,&y,&z);
	for(int i=0;i<n;i++)scanf("%d",a+i);
	for(int i=0;i<n;i++)scanf("%d",b+i);

	//x
	for(int _=0;_<x;_++){
		int pos=-1;
		for(int i=0;i<n;i++)if(!flag[i]){  //まだ合格が決まっていない人のうち
			if(pos==-1||a[i]>a[pos])pos=i;  //現時点で一番優秀な人
		}
		flag[pos]=1;
	}

	//y
	for(int _=0;_<y;_++){
		int pos=-1;
		for(int i=0;i<n;i++)if(!flag[i]){  //まだ合格が決まっていない人のうち
			if(pos==-1||b[i]>b[pos])pos=i;  //現時点で一番優秀な人
		}
		flag[pos]=1;
	}

	//z
	for(int _=0;_<z;_++){
		int pos=-1;
		for(int i=0;i<n;i++)if(!flag[i]){ //まだ合格が決まっていない人のうち
			if(pos==-1||a[i]+b[i]>a[pos]+b[pos])pos=i;  //現時点で一番優秀な人
		}
		flag[pos]=1;
	}

	for(int i=0;i<n;i++)if(flag[i])printf("%d\n",i+1);
}
