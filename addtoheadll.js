MyLinkedList.prototype.addAtHead = function(val) {
    let newnode =  new Node(val);
    newnode.next = this.head
    this.head = newnode
    this.size++;
    
};
