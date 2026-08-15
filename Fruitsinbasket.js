// You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

// You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

// You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
// Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
// Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
// Given the integer array fruits, return the maximum number of fruits you can pick.
// FRUITS IN BASKET SOLUTION

/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
    let low = 0;
    let res = 0;
    let n = fruits.length;
    let freq = new Map();
    for(let high = 0;high<=n-1;high++){
        let key = fruits[high];
        freq.set(key,(freq.get(key)|| 0)+1)
        //shrink karlete hai jab tak high phad raha hai takkin answer nikal sakke sahi wala 
        while(freq.size>2){
            let fruitkey = fruits[low];
            freq.set(fruitkey,(freq.get(fruitkey)-1))
            if(freq.get(fruitkey)===0){
                freq.delete(fruitkey)
            }
            low++;
        }
        let len = high - low + 1;
        res = Math.max(res,len);


    }
    return res === 0 ? -1 : res;
};
