#include<stdio.h>
int main(){
 
    int n, i, j, x;
 
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        for(j=1; j<n; j++){    
            x=i;
            x*=j;
            if(x%n==1){
                if(j>=i){
                    printf("(%d,%d)\n", i, j);
                }
            }
        
        }
    }
    
return 0;
}