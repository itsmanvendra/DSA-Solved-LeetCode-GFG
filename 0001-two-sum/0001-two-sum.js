/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let answer = [];
    let mp = {};
    for(let i=0; i<nums.length; i++){
        if(mp[target-nums[i]] >= 0){
            answer.push(mp[target-nums[i]]);
            answer.push(i);
        }
        else{
            mp[nums[i]] = i;
        }
    }
return answer;
};