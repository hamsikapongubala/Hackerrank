int sockMerchant(int n, vector<int> ar) {
   
      unordered_set <int> colors;
        int pairs = 0;
       
        for (int i = 0; i < n; i++) {
           
         if (colors.find (ar[i]) == colors.end()) { //checks if it is not in the set
                colors.insert(ar[i]);
            } else {
            pairs++;
            colors.erase(ar[i]);
        }
    }

        return pairs;

}
