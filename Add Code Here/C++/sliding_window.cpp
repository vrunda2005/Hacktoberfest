#include <iostream>
#include <vector>
using namespace std;

vector<int> getKMax(const vector<int>& arr, int n, int k)
{
    vector<int> res;
  
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        res.push_back(max);
    }
  
    return res;
}

int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = arr.size();
    int k = 3;
    vector<int> res = getKMax(arr, n, k);
    for (int maxVal : res) {
        cout << maxVal << " ";
    }
    return 0;
}
