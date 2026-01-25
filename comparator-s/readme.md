## Comparators

Comparators are used to define custom ordering logic for elements in data structures.

### Basic Concept

Instead of relying on default sorting behavior, comparators let you implement your own comparison logic for specific use cases.

### Example 1: Sorting Integers

```cpp
#include<bits/stdc++.h>
using namespace std;

bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b) {
    return a > b;
}

void print(vector<int>& vec) {
    for(int &n : vec) {
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {9, 3, 1, 6, 4, 10};
    sort(begin(vec), end(vec), descending);
    print(vec);
    return 0;
}
```

### Example 2: Sorting Pairs

```cpp
#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>>& vec) {
    for(auto it : vec) {
        cout << it.first << " " << it.second << " | ";
    }
}

bool myComparator(pair<int,int>& a, pair<int,int>& b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }
    return a.first > b.first;
}

int main() {
    vector<pair<int,int>> vec = {{5,3}, {10,4}, {3,4}, {3,5}};
    sort(begin(vec), end(vec), myComparator);
    print(vec);
    return 0;
}
```

This comparator sorts pairs in descending order by first element, with ties broken by second element in descending order.


