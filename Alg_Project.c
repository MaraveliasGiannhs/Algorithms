#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int num;
}Node;

int main(){
	int i;
	insertionSort();
	selectionSort();
	binarySearch(10); //psaxnw ton arithmo 10
	serialSearch(5);
	
	Node node[10];
	node[0].num=15;
	node[1].num=8;
	node[2].num=7;
	node[3].num=2;
	node[4].num=18;;
	node[5].num=19;
	node[6].num=12;
	node[7].num=10;
	node[8].num=11;
	node[9].num=13;
	printf("\n\nArithmoi: 15,8,7,2,18,19,12,10,11,13\n\n");
	printf("Arxiko dendro:\n");
	printf("           %d <- ROOT\n",node[0].num);
	printf("         /    \\ \n");
	printf("       %d      %d\n",node[1].num,node[4].num);
	printf("     /   \\      \\ \n");
	printf("   %d     %d      %d\n",node[2].num,node[6].num,node[5].num);
	printf("  /      / \\ \n");
	printf(" %d     %d   %d \n",node[3].num,node[7].num,node[9].num);
	printf("         \\ \n");
	printf("          %d\n",node[8].num);
	printf("\n\n O prwtos arithmos einai panta h riza tou dendrou.\n Meta apo auton, o kathe arithmos sugkrinete.\n An o arithmos einai < tou proigoumenou tote phgainei aristera.\n An einai > tote phgainei deksia.\n H diadikasia auth epanalamvanetai mexris otou na uparxei kenh thesh gia na eisaxthei o upokomvos me ton arithmo. ");
	
	printf("\n\n Diagrafh komvou me ena paidi (Arithmos 10):\n");
	
	printf("           %d\n",node[0].num);
	printf("         /    \\ \n");
	printf("       %d      %d\n",node[1].num,node[4].num);
	printf("     /   \\      \\ \n");
	printf("   %d     %d      %d\n",node[2].num,node[6].num,node[5].num);
	printf("  /      / \\ \n");
	printf(" %d     %d   %d  *O upokomvos (11) phre thn thesh tou komvou gonea (10).\n",node[3].num,node[8].num,node[9].num);

	printf("\n\n Diagrafou komvou me 2 upokomvous  (Arithmos 8):");
	printf("\n 1os tropos: Antikatastash me to aristerotero stoixeio tou deksioterou upokomvou.");
	printf("\n 2os tropos: Antikatastash me to deksiotero stoixeio tou aristeroterou upokomvou. \n\n Paradeigma me ton prwto tropo:\n");
	printf("           %d\n",node[0].num);
	printf("         /    \\ \n");
	printf("       %d      %d\n",node[7].num,node[4].num);
	printf("     /   \\      \\ \n");
	printf("   %d     %d      %d\n",node[2].num,node[6].num,node[5].num);
	printf("  /      / \\ \n");
	printf(" %d     %d   %d  \n",node[3].num,node[8].num,node[9].num);
	
	
	treeSearch(node);
	printf("\n\n=============RECURSIVE FUNCTION===================");
	for (i=0;i<8;i++)
	printf("\nResult %d: %d",i+1,fibbonacci(i));
	
	
	return 0;
}

void insertionSort(){
	printf("======== INSERTION SORT =======\n\n");
	int i,j,x=0,key,n=10,a[10]={8,7,10,9,3,2,1,6,5,4};
	
	for (i=1;i<n;i++){
		key=a[i];
		j=i-1;
		printArray(a);
		printf("   %d < %d\n\n",a[i-1],a[i]);
		while(j>=0 && key<a[j]){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
		//printArray(a,i);

	}
	printArray(a);
	printf("   SORTED\n");
	printf("\nPoluplokothta: Taksews O(n^2), opou n to megethos tou pinaka\n");
	printf("==============================\n");
	}
	
	
void printArray(int a[]){
	int i,n=10;
	for(i=0;i<n;i++){
		printf("|%d",a[i]);
	}
}


void selectionSort(){
	printf("\n===SELECTION SORT===\n");
	int i,j,n=10,min,minj,a[10]={8,7,10,9,3,2,1,6,5,4};
	
	for(i=0;i<n-1;i++){
		printf("\n");
		printArray(a);
		min=a[i];
		minj=i;
		for(j=i+1;j<n;j++)
			if(a[j]<min){
				min=a[j];
				minj=j;
			}
		a[minj]=a[i];
		a[i]=min;
		printf("    Thesh: %d   Min arithmos: %d\n",i,min);
		printArray(a);
		if(i==n-2)
		printf("    SORTED\n\n");
		else
		printf("    Antikatastash tou min sthn thesh %d\n",i);
		}
		printf("\nPoluplokothta: Taksews O(n^2), opou n to megethos tou pinaka\n");

}

void binarySearch(int num){
	int i=0,found=-1,a[10]={8,7,10,9,3,2,1,6,5,4},left=0, right=10, mid=(left + right) / 2;
		printf("\n ===========BINARY SEARCH==========\n       ");
		printArray(a);
	while(found!=num){
		i++;
		printf("\n\n Left pointer:%d\n Right pointer:%d\n Middle pointer:%d\n",left,right,mid);
		if (a[mid]<num){
			right=mid+1;
			mid=(left + right) / 2;
		}
		else if(a[mid]>num){
			left=mid-1;
			mid=(left + right) / 2;
		}
		else if(a[mid]==num){
			found=num;
			printf("\nO arithmos (10) vrethike sthn thesh %d tou pinaka meta apo %d anazhthseis",mid+1,i);
			break;
		}
	}
	printf("\nPoluplokothta: Taksews O(log n), opou n to megethos tou pinaka\n");
	printf("=================================\n");

}

void serialSearch(int num){
	printf("\n==========SERIAL SEARCH============\n");
	int i,a[10]={8,7,10,9,3,2,1,6,5,4};
	printArray(a);
	for(i=0;i<10;i++)
	if(a[i]==num)
	printf("\nO arithmos %d vrethike sthn thesh %d meta apo %d anazhthseis.",num,i,i);
	else continue;
	printf("\nPoluplokothta: Taksews O(n), opou n to megethos tou pinaka\n");
		printf("==================================\n");

}
void treeSearch(Node node []){
	int numSearch=16,i=0;
	while(node[i].num!=numSearch && i<10){
		i++;
	}
	printf("\n\n\n O arithmos 16 den vrethike sto dendro (%d anazhtiseis)",i);
	printf("\n Poliplokothta teleiou dendrou me ta elaxista dunata epipeda: taksews O(log n)");
	printf("\n Poliplokothta xeiroterhs periptwshs dendrou me ta megista dunata epipeda: taksews O(n)");
	
	
}

int fibbonacci(int n) {
   if(n == 1)
      return 1;
    else if (n==0)
		return 0;
	else 
      return (fibbonacci(n-2) + fibbonacci(n-1));
     
   
}







