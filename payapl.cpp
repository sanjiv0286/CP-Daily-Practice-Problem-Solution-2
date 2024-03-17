int minimumSplits(vector<int> arr)
{
    long total_split = 0;

         // Get the value at the last index
        long prevVal = arr.back();

    for (int idx = arr.size() - 2;
         idx >= 0; idx--)
    {

        totalSplits += (arr[idx] - 1) / prevVal;
        int numGroups = ((arr[idx] - 1) / prevVal + 1);
        prevVal = arr[idx] / numGroups;
    }
    return totalSplits;
}