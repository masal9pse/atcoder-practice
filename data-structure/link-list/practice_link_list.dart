// 1. 単方向リンクリストの末尾追加
// 2. 先頭に追加
// 3. 追加をループで表示

class Node {
  final dynamic data;
  Node? next;

  Node(this.data, [this.next]);
}

class LinkList {
  Node? head;

  void append(dynamic data) {
    final newNode = Node(data);
    if (this.head == null) {
      this.head = newNode;
      return;
    }
    Node lastNode = this.head!;
    while (lastNode.next != null) {
      lastNode = lastNode.next!;
    }
    lastNode.next = newNode;
    final k = 3;  
  }
}

void main(List<String> args) {
  final l = LinkList();
  l.append(1);
  l.append(2);
  final k = 3;
}