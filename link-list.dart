class Node {
  Node({required this.data,this.next});
  final dynamic data;
  Node? next;
}

class LinkedList {
  Node? head;
  LinkedList({this.head});

  void append(dynamic data) {
    final newNode = Node(data: data);
    // リンクリストの初期値がHEAD(Nodeがnull)の場合
    if(this.head == null) {
      this.head = newNode;
      return;
    }

    // Nodeが入っていて、nextに次のNodeを挿入する
    Node lastNode = this.head!;
    // 値は確定で入っているから強制アンラップで
    // 
    while (lastNode.next != null) {
      lastNode = lastNode.next!;
    }
    lastNode.next = newNode;
  }

  void insert (dynamic data) {
    final newNode = Node(data: data);
    newNode.next = this.head;
    this.head = newNode;
  }
}

void main(List<String> args) {
  final l = LinkedList();
  l.append(1);
  l.append(2);
  l.append(3);
  print(l.head!.data);
  print(l.head!.next!.data);
  print(l.head!.next!.next!.data);
}