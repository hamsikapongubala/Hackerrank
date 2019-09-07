int countingValleys(int n, string s) {
    int level = 0;
    int valley = 0;
    bool v = false;
    for(int i =0;i<n;i++){

        if(s[i] == 'D'){
            level = level -1;
            

        }
        if(s[i] == 'U'){
            level = level + 1;
            
        }
         if(level == 0 && s[i]=='U')
            valley++;
    }
    return valley;
}
