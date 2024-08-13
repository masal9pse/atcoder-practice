### オブジェクト({})の範囲内の時
そのオブジェクトを示す

```js
const a = {
    let k = 3;
    show() {
        console.log(this); // そのオブジェクト自身
    }
}

```

### オブジェクトの範囲外の時
jsならWindow/nodeならGlobalオブジェクト

```js
console.log(this) // Global
```

### オブジェクト内でfunction関数を使用する
jsならWindow/nodeならGlobalオブジェクト

```js
const a = {
    const languages = [1,3,3];
    show() {
        this.languages.forEach(function(language) {
            console.log(this.language); // Globalオブジェクトを参照するのでundifinedになる
        });
    }
}

```

## 対処法1
バインド関数を使用

## 対処法2アロー関数を使用
### オブジェクト内でアロー関数を使用
