
class Solution
{
public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int> &arr)
    {
        //  in buble sort we try to loop the array n-1 times
        // and in each interation we swap the larger number to
        // the right and with each iteration the last number
        // becomes the largest , and we stop the next iteration
        // one step before the current

        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};