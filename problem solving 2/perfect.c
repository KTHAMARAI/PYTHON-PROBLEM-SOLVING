bool isPerfectSquare(int num) {
    for(long int i=0;i<=num;i++){
        if(i*i==num){
            return true;
        }
    }
    return false;
}