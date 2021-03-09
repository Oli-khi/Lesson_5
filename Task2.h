
namespace Lesson5 
{
	void ArrFiller(int arr[8]) {
		for (int i = 1; i < 8; i++) {
			arr[0] = 1;
			arr[i] = arr[0] + 3 * i;
		}
		for (int i = 0; i < 8; i++) {
			std::cout << arr[i] << '\t';
		}
		std::cout << std::endl;
	}
}