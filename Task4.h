
namespace Lesson5 {
	void MoveArr(int arr[], int size, int shift) {

        int temp;
        if (shift > 0) {
            for (int i = 0; i < shift; ++i)
            {
                int j;
                temp = arr[0];
                for (j = 0; j < size - 1; ++j)
                    arr[j] = arr[j + 1];
                arr[j] = temp;
            }
        }
        else if (shift < 0) {
            for (int i = 0; i > shift; --i)
            {
                int j;
                temp = arr[0];
                for (j = 0; j < size - 1; ++j)
                    arr[j] = arr[j + 1];
                arr[j] = temp;
            }
        }
        for (int y = 0; y < size; y++) {
            std::cout << arr[y] << '\t';
        }
        std::cout << std::endl;
	}
}