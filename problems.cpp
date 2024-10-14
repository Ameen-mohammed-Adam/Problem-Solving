#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#define fixed(n) cout << fixed << setprecision(n);
#define nl '\n'
#define ll long long
#define str_to_ll(s) stoll(s)
using namespace std;
 
//==========================================================================================
void io(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    #endif
}
ll fact(int a){
    if(a == 0 || a == 1) {return 1 ;}
    else {return a*fact(a-1);} 
}

void Problem(){

    // int t;
    // cin >> t ;
    // ll Leaves = 0 , n , k;
    // while (t--)
    // {
    //     Leaves = 0;
    //     cin >> n >> k;
    //     for (int i = n-k+1; i <= n; i++)
    //     {
            
    //     }
    //     if(Leaves%2)cout << "NO";
    //     else cout << "YES";
    //     if(t!=0)cout << nl;

    // }
    
    


















    
    
}





//==========================================================================================
int main(){
    io();
    Problem();
   return 0 ;
}

