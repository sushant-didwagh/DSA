class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        for(int i = 1;i<arr.size();i++){
            for(int j = i-1;j>=0;j--){
                if(arr[j] > arr[i]){
                    swap(arr[i], arr[j]);
                    for(int k=j;k>=0;k--){
                        if(arr[k]<arr[k-1]){
                            swap(arr[k],arr[k-1]);
                        }
                    }
                }
            }
        }
    }
};

//text
//intiall consider first element is sorted - check second element with first element and all elements which is less indexes from them if any element found which is gretef than current - swap both element and check swaped element previous onecs if current element is sanllest then previous then swap both. 
