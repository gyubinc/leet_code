int abs(int x){
    if (x < 0){
        return -x;
    }else return x;
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int ans = (nums[0] + nums[1] + nums[2]);
    int check = abs(nums[0] + nums[1] + nums[2] - target);
    for (int i=0; i<numsSize-2; i++){
        for (int j=i+1; j<numsSize-1; j++){
            for (int k=j+1; k<numsSize; k++){
                int now = abs(nums[i] + nums[j] + nums[k] - target);
                if ( now < check ){
                    check = now;
                    ans = (nums[i] + nums[j] + nums[k]);
                }
            }
        }

    }
    return ans;
}