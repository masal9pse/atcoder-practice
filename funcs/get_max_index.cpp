int maxIndex(int nums[], int n) {
    int max_value; /* 最大値 */
    int max_index; /* 最大値を持つ要素の添字 */
    int i;

    /* nums[0]を最大値と仮定する */
    max_value = nums[0];

    /* 現状の最大値の存在する要素に合わせて添字も設定 */
    max_index = 0;

    for (i = 0; i < n; i++) {
        if (nums[i] > max_value) {
            /* 最大値よりもnums[i]の方が大きければ最大値を更新 */
            max_value = nums[i];

            /* 最大値の存在する要素に合わせて添字も更新 */
            max_index = i;
        }
    }

    /* 最大値の存在する要素の添字を返却 */
    return max_index;
}