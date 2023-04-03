int rect(int x,int y,int posx,int posy){
	int i,j,n,m;
	
		for(m=1;m<=posy;m++){
		printf("\n");
		}
		
	for(i=1;i<=y;i++){
		for(n=1;n<=posx;n++){
		printf("%c",255);
		}
		for(j=1;j<=x;j++){
		printf("%c",219);
	}
	printf("\n");
	}
	
}