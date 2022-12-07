#include<stdio.h>
int main(){
int n;
printf("enter the no of element");
scanf("%d",&n);
int a[n];
printf("enter the arry");
for (int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
int e;
printf("enter the search of element");
scanf("%d",&e);
int low=0,high=n;
while(low<=high){
	int mid = low+(high-low)/2;
	if(a[mid]==e){
		printf(" index of searching element %d",mid);
		break;
	}
	else if(a[mid]<e){
		low=mid+1;
	}
	else{
		high =mid-1;
	}
}

}
