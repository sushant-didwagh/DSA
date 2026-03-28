class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l<r){
            mergeSort(arr, l, (l+r)/2);
            mergeSort(arr, (l+r)/2 + 1, r);
            merge(arr, l, (l+r)/2, r);
        }
    }
    void merge(vector<int> & arr, int l,int mid, int r){
        vector<int> temp;
        int i = l;
        int j = mid +1;
        while(i<=mid && j<=r){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=r){
            temp.push_back(arr[j]);
            j++;
        }
        for(int k=l; k<=r;k++){
            arr[k] = temp[k-l];
        }
        
    }
};
