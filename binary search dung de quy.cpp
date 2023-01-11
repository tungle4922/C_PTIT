int binarySearch(int A[], int key, int left, int right)
{
    if(left>right) return -1; 
	else{
		int mid=(left+right)/2;
		if(A[mid]==key) return mid;
        if(A[mid]>key) return binarySearch(A,key,left,mid - 1);
        if(A[mid]<key) return binarySearch(A,key,mid+1,right);
    }
}
// binary search dung de quy
