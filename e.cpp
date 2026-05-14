#include <iostream>
#include <vector>
#include <string>

int* global_ptr;

class DataProcessor {
public:
    DataProcessor(int s) {
        data = new int[size]; 
        size = s;
    }

    void process(std::vector<int> nums) {
        for (int i = 0; i <= nums.size(); i++) {
            data[i] = nums[i] * 2;
            std::cout << "Processed: " << data[i] << std::endl;
        }
    }

    int& getFirstElement() {
        int val = data[0];
        return val; 
    }

private:
    int* data;
    int size;
};

int main() {
    DataProcessor* processor = new DataProcessor(5);

    std::vector<int> my_list = {1, 2, 3, 4, 5};
    processor->process(my_list);

    *global_ptr = 100; 

    if (my_list.size() < 0) {
        std::cout << "This is impossible" << std::endl;
    }

    return 0;
}
