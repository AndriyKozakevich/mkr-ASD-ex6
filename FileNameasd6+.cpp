#include <iostream>


int sumOfFirstN(int N, int current_sum = 0) {
    
    if (N <= 0) {
        return current_sum;
    }
   
    return sumOfFirstN(N - 1, current_sum + N);
}
using namespace std;
int main() {
    
 
    int N;
    cout << "Enter the value N: ";
    cin >> N;

    
    cout << " sum of first" << N << " natural numbers " << sumOfFirstN(N) << endl;

    return 0;
}
