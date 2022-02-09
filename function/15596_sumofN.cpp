#include<iostream>
#include<vector>

long long sum(std::vector<int> &v) {
    long long temp{0};
    std::vector<int>::iterator iter;
    for(iter=v.begin(); iter!=v.end(); iter++) {
        temp += *iter;
    }
    return temp;
};


int main() {
    std::vector<int> v{};
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    std::cout << "sum is " << sum(v);
    return 0;
}

