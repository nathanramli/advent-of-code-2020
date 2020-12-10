#include <iostream>
#include <vector>

typedef long long ll;
std::string s;
std::vector<std::string> arr;
size_t len, v_len;

ll cnt(int r, int d){
    ll ans=0;
    int x, y;
    x=y=ans=0;
    while (x+d<v_len)
    {
        x+=d;
        y = (y + r) % len;
        if(arr[x][y] == '#')
            ++ans;
    }
    return ans;
}

int main(){
    while (std::cin >> s)
        arr.push_back(s);

    len = arr[0].size(), v_len = arr.size();

    std::cout << (cnt(3, 1) * cnt(1, 1) * cnt(5, 1) * cnt(7, 1) * cnt(1, 2)) << std::endl;
}