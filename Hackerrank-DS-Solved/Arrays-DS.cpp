

#include <iostream> 
#include <vector> 
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[n - 1 - arr_i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
// Vectors aren't exactly arrays. ... They are dynamic arrays. They can be resized as needed rather than being of a fixed size.
