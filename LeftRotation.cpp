vector<int> rotLeft(vector<int> a, int d) {
    int size = a.size();
    vector<int> res(size);
    for(int i = 0 ; i<size;i++){
        int loc = (i+d)%size;
        res[i] = a[loc];
    }
    return res;
}
