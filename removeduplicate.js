/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
    if (!head) return head;

    let slow = head;
    let fast = head.next;

    while (fast) {
        if (slow.val === fast.val) {
            slow.next = fast.next;
        } else {
            slow = slow.next;
        }

        fast = fast.next;
    }

    return head;
};
