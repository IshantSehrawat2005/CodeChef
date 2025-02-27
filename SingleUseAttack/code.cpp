#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        // Strategy 1: Only Normal Attacks
        int attacksNormal = (H + X - 1) / X;  // Ceiling of H / X
        
        // Strategy 2: Using Special Attack Once
        int remainingHealth = H - Y;
        int attacksSpecial;
        
        if (remainingHealth <= 0) {
            attacksSpecial = 1;  // Special attack is enough to defeat the boss
        } else {
            attacksSpecial = 1 + (remainingHealth + X - 1) / X;
        }
        
        // Get the minimum attacks required
        int result = min(attacksNormal, attacksSpecial);
        
        // Print the result for this test case
        cout << result << endl;
    }

    return 0;
}
