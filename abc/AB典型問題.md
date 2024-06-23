- シフト演算
    - https://algo-method.com/courses/5
    - https://atcoder.jp/contests/abc336/tasks/abc336_b

- ランレングス圧縮
    - https://atcoder.jp/contests/abc337/tasks/abc337_b

- ASCIIコード
    - charの大小判定、mapではなくvectorで管理、要素番号をASCIIコードとすると大小判定が簡単にできる  https://atcoder.jp/contests/abc338/tasks/abc338_b

- 数字の性質を操る問題　苦手
https://atcoder.jp/contests/abc214/tasks/abc214_b
https://atcoder.jp/contests/abc215/tasks/abc215_b
https://atcoder.jp/contests/abc220/tasks/abc220_b
https://atcoder.jp/contests/abc239/tasks/abc239_b
https://atcoder.jp/contests/abc327/tasks/abc327_b
https://atcoder.jp/contests/abc273/tasks/abc273_b
https://atcoder.jp/contests/abc324/tasks/abc324_b
https://atcoder.jp/contests/abc202/tasks/abc202_c
https://atcoder.jp/contests/abc220/tasks/abc220_c

- 幾何 ユークリッド幾何以外は出ないので優先度低め
https://atcoder.jp/contests/abc332/tasks/abc332_b

- シミュレーション　苦手
https://zenn.dev/koyanagihitoshi/books/atcoder-classification-6/viewer/12-8　一覧
https://atcoder.jp/contests/abc332/tasks/abc332_b
https://atcoder.jp/contests/abc303/tasks/abc303_b
https://atcoder.jp/contests/abc241/tasks/abc241_b
https://atcoder.jp/contests/abc353/tasks/abc353_b

- 時間
https://atcoder.jp/contests/abc278/tasks/abc278_b

- 貪欲法(シミュレーションだと計算量がやばい場合に使うことが多い)

- グリッドの問題　高diffになる傾向にあるが、灰色diffなので茶色にいくためには落としたくない
  - 4方向＋トーラス　https://atcoder.jp/contests/abc339/tasks/abc339_b


- 考察の際は、コードの落とし込みまで完了してから実装する。そうしないと何度も書き直しが発生して時間を食う
- 最後の値を取得する場合は、後ろからループを回すと簡単になる
- 数値の比較にはmin,maxを使うと短くシンプルに書ける、
  - これも考察が進んでいるからできる
- 数値を循環させたい場合はmodを使う 
  時間に関する問題、配列の操作等によく出る

グリッドの回転の問題
https://zenn.dev/koyanagihitoshi/books/atcoder-classification-6/viewer/12-3-1

charの数字をintに直す場合は、'0'を引く