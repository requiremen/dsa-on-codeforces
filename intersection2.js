// diffrent approach
var getIntersectionNode = function(headA, headB) {
    if (!headA || !headB) return null;

    let pointer1 = headA;
    let pointer2 = headB;

    while (pointer1 !== pointer2) {
        pointer1 = pointer1 ? pointer1.next : headB;
        pointer2 = pointer2 ? pointer2.next : headA;
    }

    return pointer1; // The shared node, or null if they don't meet
};
