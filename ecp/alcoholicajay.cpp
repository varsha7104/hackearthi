/*Alcoholic Ajay So Ajay is drunkard, he should have 1 drink everyday to survive 
But is locked out of his job He had some saved money So he brought n number of 🍻

And the shop owner has given him an offer that if 
he returns k bottles he gets a free beer How long can he survive*/
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // n = initial beers, k = bottles needed for 1 new beer

    int totalDays = n;
    int emptyBottles = n;

    while (emptyBottles >= k) {
        int newBeers = emptyBottles / k;
        totalDays += newBeers;
        emptyBottles = newBeers + (emptyBottles % k);
    }

    cout << totalDays << endl;
    return 0;
}
/*OUTPUT:
10 3
14*/