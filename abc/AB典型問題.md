- シフト演算
    - https://algo-method.com/courses/5
    - https://atcoder.jp/contests/abc336/tasks/abc336_b

- ランレングス圧縮
    - https://atcoder.jp/contests/abc337/tasks/abc337_b

- ASCIIコード
    - charの大小判定、mapではなくvectorで管理、要素番号をASCIIコードとすると大小判定が簡単にできる  https://atcoder.jp/contests/abc338/tasks/abc338_b

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

- グリッドの問題　高diffになる傾向にあるが、灰色diffなので茶色にいくためには落としたくない
  - 4方向＋トーラス　https://atcoder.jp/contests/abc339/tasks/abc339_b


- 考察の際は、コードの落とし込みまで完了してから実装する。そうしないと何度も書き直しが発生して時間を食う
- 最後の値を取得する場合は、後ろからループを回すと簡単になる
- 数値の比較にはmin,maxを使うと短くシンプルに書ける、
  - これも考察が進んでいるからできる
- 数値を循環させたい場合はmodを使う 
  時間に関する問題、配列の操作等によく出る