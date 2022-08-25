#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main() {

    int arr1[] = { 1,2,3,4,5,6 };
    int arr2[] = { 0,2,4,6 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    unordered_map<int, bool> umap1;
    unordered_map<int, bool> umap2;
    for (int i = 0; i < n1; i++) {
        umap1[arr1[i]] = true;
    }
    for (int i = 0; i < n2; i++) {
        umap2[arr2[i]] = true;
    }

    vector<int> v{};

    for (int j = 0; j < n2; j++) {
        if (umap1[arr2[j]] && umap2[arr2[j]])
            v.push_back(arr2[j]);

    }
    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << endl;
    }


    return 0;
}