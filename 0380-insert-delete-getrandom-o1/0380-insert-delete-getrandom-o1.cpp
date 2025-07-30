class RandomizedSet {
private:
    vector<int> nums;
    unordered_map<int, int> valToIndex;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (valToIndex.count(val)) return false;
        nums.push_back(val); // Fix: push_back_ ➝ push_back
        valToIndex[val] = nums.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (!valToIndex.count(val)) return false;

        int index = valToIndex[val];
        int last = nums.back();

        nums[index] = last;               // Move last element to the place of the one to be removed
        valToIndex[last] = index;         // Update the index of the moved element

        nums.pop_back();                  // Remove the last element
        valToIndex.erase(val);           // Erase from map

        return true;
    }

    int getRandom() {
        int index = rand() % nums.size();
        return nums[index];
    }
};



































    

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */