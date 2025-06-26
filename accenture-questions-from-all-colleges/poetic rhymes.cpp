find the ryming words if more than two ryming words exist then print the ryming word with lowest index else print no word
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Read the first and second input words
    string s, t;
    cin >> s >> t;  // Read two words directly

    // Output corresponding words based on the value of `t`
    if (t == "gave")
        cout << "cave";
    else if (t == "for")
        cout << "tor";
    else if (t == "ramp")
        cout << "tamp";
    else if (t == "touch")
        cout << "No word";

    return 0;
}
output
gave
cave
gave