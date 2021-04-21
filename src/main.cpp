/**
 * @file main.cpp
 * @brief This is a test of CMake, doxygen, and GitHub.
 * @details This is the long brief at the top of main.cpp.
 * @author Scott Gillis
 * @date 4/20/2021
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

//source for partition found https://www.geeksforgeeks.org/quick-sort/ //
int partition(vector<int> &a, int i, int n){
	
	int pivot = n;
	int j = i;
	for(int i=i;i<n;++i){
		if(a[i]<a[pivot]){
			swap(a[i],a[j]);
			++j;
		}
	}
	swap(a[j],a[pivot]);
	return j;
	
}

//Sourced from https://www.thepolyglotdeveloper.com/2019/04/sort-vector-integers-quicksort-algorithm-cpp/
//I had a hard time implementing the code from opendatastructures to the vector but this one I thought layed it out better where I could understand better with the partition.//
//The partition essentially does the same thing as the while loop in the books code but I would say it makes this function look cleaner and easier to understand and actually helped
//understand the way the books code works.//
void quickSort(vector<int> &a, int i, int n ){

	if(i<n){
		int p = partition(a,i,n);
		quickSort(a,i,p-1);
		quickSort(a,p+1,n);
	}
	
}

void PrintVector(vector<int> a){
	for(int i=0;i<a.size();++i)
		cout<<a[i]<<" ";
	cout<<"\n\n";
}



int main() {
	
	vector<int> a = { 1 , 10 , 11 , 9 , 14 , 3 , 2 , 20 , 19 };
	
	cout<<"Vector Before Sorting: "<<endl;
	PrintVector(a);
	
	quickSort(a,0,a.size()-1);
	
	cout<<"Vector After Sorting: "<<endl;
	PrintVector(a);
		
}