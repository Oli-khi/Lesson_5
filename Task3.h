
namespace Lesson5 {
    bool CheckBalance(int arr[], int size) {

        int sum = 0;
        int middle = 0;
        bool result;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        if (sum % 2 != 0) {
            std::cout << "false" << std::endl;
            return false;
        }
        else {
            middle = sum / 2;
            int left_count = 0;
            for (int y = 0; y < size; y++) {
                if (left_count < middle) {
                    left_count += arr[y];
                }
                else {
                    break;
                }
            }
            if (left_count == middle) {
                std::cout << "true" << std::endl;
                return true;
            }
            else {
                std::cout << "false" << std::endl;
                return false;
            }
        }
    }
}
