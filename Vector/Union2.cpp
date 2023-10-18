// Here we are acombining the two array into one with repetition of word

#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5;
    int brr[] = {3, 5, 6, 8};
    int sizeb = 4;

    set<int> combinedSet;

    for (int i = 0; i < sizea; i++) {
        combinedSet.insert(arr[i]);
    }

    for (int i = 0; i < sizeb; i++) {
        combinedSet.insert(brr[i]);
    }

    for (auto i: combinedSet) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// // Function to return the union of two arrays
// vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
// {
// 	set<int> s;
// 	// Remove the duplicates from arr1[]
// 	for (int i = 0; i < n; i++) {
// 		s.insert(arr1[i]);
// 	}

// 	// Remove duplicates from arr2[]
// 	for (int i = 0; i < m; i++) {
// 		s.insert(arr2[i]);
// 	}

// 	// Loading set to vector
// 	vector<int> vec(s.begin(), s.end());

// 	return vec;
// }

// // Driver code
// int main()
// {
// 	int arr1[] = { 1, 2, 2, 2, 3 };
// 	int arr2[] = { 2, 3, 3, 4, 5, 5 };
// 	int n = sizeof(arr1) / sizeof(arr1[0]);
// 	int m = sizeof(arr2) / sizeof(arr2[0]);

// 	// Function call
// 	vector<int> uni = Unionarray(arr1, arr2, n, m);
// 	for (int i : uni) {
// 		cout << i << " ";
// 	}

// 	return 0;
// }
