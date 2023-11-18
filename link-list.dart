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

  // 先頭にNodeをインサート
  void insert (dynamic data) {
    final newNode = Node(data: data);
    newNode.next = this.head;
    this.head = newNode;
  }

  void printNodeData() {
    Node? currentNode = this.head;
    while(currentNode != null) {
      print(currentNode.data);
      currentNode = currentNode.next;
    }
  }

  // あとで
  void remove(dynamic data) {
     Node? currentNode = this.head;
     if (currentNode != null && currentNode.data == data) {
      this.head = currentNode.next;
      currentNode = null;
      return;
     }

  }
  void update() {}
}

void main(List<String> args) {
  final l = LinkedList();
  l.append(1);
  l.append(2);
  l.append(3);
  l.append(4);
  l.insert(0);
  // print(l.head!.data);
  // print(l.head!.next!.data);
  // print(l.head!.next!.next!.data);
  // // next,next... みたいにたどるのは不便 => ループで辿れるようにしたい
  // print(l.head!.next!.next!.next!.data);
  l.printNodeData();
}