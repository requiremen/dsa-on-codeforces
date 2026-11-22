// hasmap method
var getIntersectionNode = function(headA, headB) {
    // storing headb in a set
    let store = new Set();
    while(headB){
        store.add(headB);
        headB = headB.next;
    }

    // checking whether the headA have any element commpon from set then return 
    while(headA){
        if(store.has(headA)){
            return headA
        }
        headA = headA.next;
    }    
    return null;
};
