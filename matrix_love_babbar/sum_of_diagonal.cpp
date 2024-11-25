//{ Driver Code Starts
//Initial Template for C

// } Driver Code Ends
//User function Template for C

int sumDiagonal(int N, int M[][N])
{
   int first=0, second=0;
   for(int i=0; i<N; i++){
       
       first+= M[i][i];
   }
   
//   int i=0, j=N-1;
   
//   while(j >= 0){
       
//       second+= M[i][j];
//       i++,j--;
//   }
   return first;
}

//{ Driver Code Starts.

#include <stdio.h>

int main() {

	int t;
	scanf("%d", &t);
	
	while(t--)
	{
	    int N;
	    scanf("%d", &N);
	    
	    int M[N][N];
	    for(int i = 0; i < N; i++)
	    {
	        for(int j = 0; j < N; j++)
	        scanf("%d", &M[i][j]);
	    }
	    
	    printf("%d", sumDiagonal(N, M));
	    printf("\n");
	
printf("~%s", "\n");}
	return 0;
}
// } Driver Code Ends