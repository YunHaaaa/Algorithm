#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x,y,w,h;
    int tmp1,tmp2;
    cin >> x >> y >> w >> h;
    tmp1 = min(x,y);
    tmp2 = min(w-x,h-y);
    cout << min(tmp1,tmp2);
}

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int x, y, w, h;
//     cin >> x >> y >> w >> h;

//     int len1, len2;
//     if (x<w/2)
//         len1 = x;
//     else
//         len1 = w-x;
    
//     if (y<h/2)
//         len2 = y;
//     else
//         len2 = h-y;
    
//     if (len1<len2)
//         cout << len1;
//     else
//         cout << len2;
    

//     return 0;
// }
