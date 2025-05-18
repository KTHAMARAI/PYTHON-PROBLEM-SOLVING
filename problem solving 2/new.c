int findNumbers(int* a, int n) {
    int c1=0,count;
    for(int i=0;i<n;i++){
        int count=0;
        while(a[i]>0){
        count++;
        a[i]/=10;
        }
    if(count%2==0) c1++;
    }
    return c1;
    
}