- シフト演算
    - https://algo-method.com/courses/5
    - https://atcoder.jp/contests/abc336/tasks/abc336_b

- ランレングス圧縮
    - https://atcoder.jp/contests/abc337/tasks/abc337_b

- ASCIIコード
    - charの大小判定  https://atcoder.jp/contests/abc338/tasks/abc338_b

- 貪欲法 ざっくりとした実装方針は見えやすいが、基本的にコーナケースの存在を意識せずに実装するとコーナケースを探すために、デバッカーで値を見まくって時間ロスする。
　　　とにかくちゃんと最後までコード落とし込み方針もできてから実装に挑む
    - https://atcoder.jp/contests/abc167/tasks/abc167_b
    下記をminを使って、置き換えることができるのと最後、どう選ぶかもちゃんと明確にする
    ```cpp    
    if (a < k)
  {
    ans += a;
    k -= a;
  }
  else
  {
    ans += k;
    cout << ans << endl;
    return 0;
  }
    ```

- 最後の値を取得する場合は、後ろからループを回すと簡単になる