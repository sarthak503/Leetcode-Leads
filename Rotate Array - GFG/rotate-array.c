// { Driver Code Starts
#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

//Function to rotate an array by d elements in counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
    // code here
    int l=d%n;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    int idx=0;
    for(int i=l;i<n;i++){
        arr[idx]=temp[i];
        idx++;
    }
    for(int i=0;i<l;i++){
        arr[idx]=temp[i];
        idx++;
    }
}

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	scanf("%d",&t);
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    scanf("%d%d",&n, &d);
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        scanf("%d",&arr[i]);
	    }
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends