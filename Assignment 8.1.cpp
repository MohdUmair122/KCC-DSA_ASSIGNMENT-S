/*
	Count Sort Algorithm
	**Time Complexity: O(n)
	**Space Complexity: O(max_number-min_number)
*/

#include <bits/stdc++.h>
using namespace std;

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
	//write the code for count sort
	vector<int>B(A.size(),0);
	for(int i=0;i<=A.size();i++) for(int j=0;j<A.size();j++) if(i==A[j]) B[i]++;
	A.clear();
	int k=0;
	for(int i=0;i<B.size();i++){
		k=B[i];
		if(B[i]>0)	for(int j=0;j<k;j++) A.push_back(i);
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8,8,8,8,4,5,3,5};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
	
	return 0;
}
