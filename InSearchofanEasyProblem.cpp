#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Step 1: Read the number of opinions

    bool is_hard = false;  // Step 2: Initialize a flag to track if the problem is hard

    for (int i = 0; i < n; i++) {  // Step 3: Loop through each opinion
        int opinion;
        cin >> opinion;

        if (opinion == 1) {  // If we find a '1', the problem is hard
            is_hard = true;
            break;  // Exit the loop as we already know the answer
        }
    }

    // Step 4: Determine the output based on the flag
    if (is_hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}
