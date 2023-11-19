class Node {
  final dynamic data;
  Node? nextNode;
  Node? prevNode;

  Node(this.data, [this.nextNode, this.prevNode]);
}

class DoublyLinkedList {
 Node? head;

  DoublyLinkedList([this.head]);

  // データを挿入
  void append(dynamic data) {
    final newNode = Node(data);
    if (this.head == null) {
      this.head = newNode;
      return;
    }
    Node? currentNode = this.head;
    while (currentNode!.nextNode != null) {
      currentNode = currentNode.nextNode;
    }
    currentNode.nextNode = newNode;
    newNode.prevNode = currentNode;
  }

  // データを先頭に挿入
  void insert(dynamic data) {
    final newNode = Node(data);
    // データがない場合
    if (this.head == null) {
      this.head = newNode;
      return;
    }

    // データがある場合
    this.head!.prevNode = newNode; // 分からん
    newNode.nextNode = this.head;
    this.head = newNode;
    int k = 3;
  }

  void printNodeData() {
    var currentNode = this.head;
    while (currentNode != null) {
      print(currentNode.data);
      currentNode = currentNode.nextNode;
    }
  }

  // データを削除
  void remove(dynamic data) {}
}

void main(List<String> args) {
  final d = DoublyLinkedList();
  d.append(1);
  d.append(2);
  d.append(3);
  d.insert(0);
  // print(d.head!.data);
  // print(d.head!.nextNode!.data);
  // print(d.head!.nextNode!.nextNode!.data);
  d.printNodeData();
  // print(d.head!.nextNode!.nextNode!.prevNode!.data);
  // print(d.head!.nextNode!.nextNode!.prevNode!.prevNode!.data);
}