//omar jabari Code;;;;☕
//--------------------Dark souls-----------------//
 
#include <iostream>
#include<map>
#include <unordered_map>
#include<limits.h>
#include<set>
#include<vector>
#include<string>
#include <iomanip>

#include<cmath>
#include<algorithm>
#include<queue>
#define tu transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
#define tl transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
#define not_less_than(v, n) lower_bound(v.begin(), v.end(), n)                   // n >= return values not least than n
#define not_more_than(v, n) lower_bound(v.rbegin(), v.rend(), n, greater<ll>()) // n <=
#define more_than(v, n) upper_bound(v.begin(), v.end(), n)                       // return values greatest than n 
#define less_than(v, n) upper_bound(v.rbegin(), v.rend(), n, greater<ll>())     // n >
#define endl '\n'

#define sps sort(v.begin(),v.end(), [](const pair<long long, long long> &a, const pair<long long, long long> &b) {return a.second < b.second;});

#define sor sort(v.begin(),v.end());
#define dark {ios_base::sync_with_stdio(false);}
#define souls {cin.tie(NULL);}
#define game  {cout.tie(0);}

#define ll long long
#define pb push_back
#define no "NO"
#define yes "YES"
//Ring
using namespace std;
void findPermutations(string str) {
    sort(str.begin(), str.end());

    do {
      cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

// to change string into number use stoi 

// to change string into long long use stoll i think 
 ll gcd(ll a, ll b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return (a / gcd(a, b)) * b;
}
 //lower case from 97 to 122 
// upper case from 65 to 90

void solve()
{
    ll a , b ; cin >> a >> b ; 
    vector <ll> v(a) , vtx(b) ; 
    vector <ll> fofo ;
    for(ll i = 0 ; i < v.size() ; i++ )
    {
        cin >> v[i] ;
    }
    sort(v.begin(),v.end());
    for (ll i =0 ; i < vtx.size() ; i++ )
    {
        cin >> vtx[i] ;
        
    }
    for (ll i = 0 ; i < vtx.size() ; i++ )
    {
        auto it = upper_bound(v.begin(),v.end(),vtx[i]);
        auto len = distance(v.begin(),it);
        fofo.push_back(len);
    }
    for(ll i = 0 ; i<fofo.size();i++)
    {
        cout<<fofo[i]<<" ";
    }
    cout<<endl;
    
    
    
}
int32_t main()
{
dark
souls
game
 // ll t;
 // cin >> t;
  //while (t--)
        solve();
    return 0;
}