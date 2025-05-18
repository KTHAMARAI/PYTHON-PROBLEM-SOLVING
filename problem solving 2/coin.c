char* winningPlayer(int x, int y) {
    return ((int) fmin(x,y/4))%2==0?"Bob":"Alice";
}