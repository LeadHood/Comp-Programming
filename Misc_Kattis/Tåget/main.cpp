// #include "bits/stdc++.h"

// /*
// 0: Postvagn kan bara inleda tåget, kopplas direkt efter loket eller efter en annan postvagn. Det kan högst finnas två postvagnar, men behöver inte finnas någon.

// 1: Restaurangvagn måste alltid befinna sig mellan två personvagnar. Det kan finnas hur många som helst men behöver inte finnas någon.

// 2: Det måste finnas minst en personvagn och kan finnas hur många som helst.

// 3: Godsvagn kopplas alltid sist i tåget. En godsvagn kan endast ha en annan godsvagn efter sig. Det får finnas högst tre godsvagnar, men behöver inte finnas någon. Programmet ska fråga efter hur många vagnar tåget innehåller och därefter beräkna och skriva ut antalet olika tåg som kan komponeras.

// */
// using namespace std;
// using ll = long long;
// using ull = uintmax_t;

// ll result = 0;

// void comb(int target, vector<int> a, int pVagns){
//     int index = a.size();
//     if(index == target){
//         if(pVagns > 0){
//             // for (auto& x : a){
//             //     cout << x << ", ";
//             // }

//             // cout << '\n';

//             result++;
//         }

//         return;
//     }

//     if(index == 0  || (index == 1 && a[0] == 0)){
//         a.push_back(0);
//         comb(target, a, pVagns);
//         a.pop_back();
//     }

//     if(index != 0 && index != target - 1 && a[index - 1] == 2){
//         a.push_back(1);
//         a.push_back(2);
//         comb(target, a, pVagns + 1);
//         a.pop_back();
//         a.pop_back();
//     }

//     a.push_back(2);
//     comb(target, a, pVagns + 1);
//     a.pop_back();

//     if(target > 2 && index == target - 3){
//         a.push_back(3);
//         a.push_back(3);
//         a.push_back(3);
//         comb(target, a, pVagns);
//         a.pop_back();
//         a.pop_back();
//         a.pop_back();
//     }

//     if(target > 1 && index  == target - 2){
//         a.push_back(3);
//         a.push_back(3);
//         comb(target, a, pVagns);
//         a.pop_back();
//         a.pop_back();
//     }

//     if(index == target - 1){
//         a.push_back(3);
//         comb(target, a, pVagns);
//         a.pop_back();
//     }
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(nullptr);
//     ll answers[] = {1, 3, 7, 13, 22, 36, 58, 94, 152, 246, 398, 644, 1042, 1686, 2728, 4414, 7142, 11556, 18698, 30254, 48952, 79206, 128158, 207364, 335522, 542886, 878408, 1421294, 2299702, 3720996};
//     int n;
//     cin >> n;
//     cout << answers[n - 1];
// }

#include <stdio.h>
int main() {
    int n, a[] = {1, 3, 7, 13, 22, 36, 58, 94, 152, 246, 398, 644, 1042, 1686, 2728, 4414, 7142, 11556, 18698, 30254, 48952, 79206, 128158, 207364, 335522, 542886, 878408, 1421294, 2299702, 3720996};
    scanf("%d", &n);
    printf("%d", a[n-1]);
}
