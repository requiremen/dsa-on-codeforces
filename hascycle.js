// hashtable method
var hasCycle = function(head) {
    let curr = head;
    let ht = new Set();
    while(curr!==null){
        ht.add(curr);
        curr = curr.next
        if(ht.has(curr)){
            return true;
        }else{
            continue;
        }
    }
    return false;
    
};
