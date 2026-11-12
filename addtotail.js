MyLinkedList.prototype.addAtTail = function(val) {
    let newNode = new Node(val)
    if(this.head  === null){
        this.head = newNode
    }
    else{
        let curr = this.head;
        while(curr.next != null){
            curr = curr.next
        }
        curr.next = newNode;
    }
    
    this.size++
};
