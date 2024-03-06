#include <iostream>
#include <vector>
using namespace std;

vector<int> findPeaks(vector<int>& mountain) {
    vector<int> result;
    for(int i = 1; i < mountain.size() - 1; i++) {
        if(mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<int> mountain = {1,4,3,8,5};
    vector<int> peaks = findPeaks(mountain);
    cout << "Peak elements are:";
    for (int peak : peaks) {
        cout << " " << mountain[peak];
    }
    cout <<endl;
    return 0;
}
