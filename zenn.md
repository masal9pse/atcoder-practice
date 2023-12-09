setでもfindが使える
検索結果が合致しなかった場合、endを返す
https://cpprefjp.github.io/reference/set/set/find.html

```cpp

int main() {
    set<int> k = {2,3,5};
    if (k.find(3) != k.end()) {
        // 3が見つかった
    }

    set<pair<int>> sp = {{0,0},{-1,0},{-1,1}};
    if (sp.find({-1,0}) != sp.end()) {
        // -1,0が見つかった
    } 
    return 0;
}

```